#ifndef _DECLNODE_
#define _DECLNODE_

#include "TreeNode.hpp"
#include "../symtab/symboltable.h"

class Type_part_Node : public TreeNode{
public:
	explicit Type_part_Node(Type_decl_list_Node *list)
		:list(list){}
	std::string build_symbol_table(std::string type = "");
	
private:
	Type_decl_list_Node * list;
};

class Type_decl_Node : public TreeNode{
public:
	virtual std::string build_symbol_table(std::string){};

protected:
	Type_decl_Node(){}
};


class Simple_type_decl_Node;
class Array_type_decl_Node : public Type_decl_Node{
public:
	Array_type_decl_Node(Simple_type_decl_Node *range, Type_decl_Node *type)
		:range(range), type(type){}
	std::string build_symbol_table(std::string);

public:
	Simple_type_decl_Node * range;
	Type_decl_Node * type;
};

class Field_decl_Node : public TreeNode{ //for record type
public:
	Field_decl_Node(Name_list_Node *name_list, Type_decl_Node *type)
		:name_list(name_list), type(type){}
	std::string build_symbol_table(std::string);

private:
	Name_list_Node *name_list;
	Type_decl_Node *type;
};

class Field_decl_list_Node : public TreeNode{
public:
	Field_decl_list_Node(Field_decl_list_Node *prev, Field_decl_Node *decl)
		:prev(prev), decl(decl){}

	explicit Field_decl_list_Node(Field_decl_Node *decl)
		:decl(decl){}
	std::string build_symbol_table(std::string);

private:
	Field_decl_list_Node *prev = nullptr;
	Field_decl_Node *decl;
};

class Record_type_decl_Node : public Type_decl_Node{
public:
	explicit Record_type_decl_Node(Field_decl_list_Node* list)
        :list(list){}
    std::string build_symbol_table(std::string);
    
private:
	Field_decl_list_Node *list;
};

/*********  simple type decl *****************/
class Simple_type_decl_Node : public Type_decl_Node{
protected:
	Simple_type_decl_Node(){}
};

class System_type_decl_Node : public Simple_type_decl_Node{
public:
	enum Type{INT, REAL, ENUM, CHAR, STRING, BOOL};
public:
	explicit System_type_decl_Node(Type type):type(type){}
	Type getType() const{ 
        return type;
    }
private:
	Type type;
};

class Alias_type_decl_Node : public Simple_type_decl_Node{
public:
	explicit Alias_type_decl_Node(Id_Node* id):id(id){}
private:
	Id_Node *id;
};

class Enum_type_decl_Node : public Simple_type_decl_Node{
public:
	explicit Enum_type_decl_Node(Name_list_Node *name_list)
		:name_list(name_list){}
private:
	Name_list_Node *name_list;
};

class Subrange_type_decl_Node : public Simple_type_decl_Node{
protected:
	Subrange_type_decl_Node(){}
};

class Subrange_const_value_type_decl_Node : public Subrange_type_decl_Node
{
public:
	Subrange_const_value_type_decl_Node(bool lowerNeg, Const_value_Node *low, 
		bool upperNeg, Const_value_Node *high)
		:lowerBound(low), upperBound(high), isLowerNeg(lowerNeg), isUpperNeg(upperNeg){}
private:
	Const_value_Node *lowerBound;
	Const_value_Node *upperBound;
	bool isLowerNeg;	//is lower bound neggative
	bool isUpperNeg;	//is upper bound neggative
};

class Subrange_id_type_decl_Node : public Subrange_type_decl_Node
{
public:
	Subrange_id_type_decl_Node(Id_Node* lower, Id_Node* upper)
		:lower(lower), upper(upper){}
private:
	Id_Node* lower;
	Id_Node* upper;
};

#endif
