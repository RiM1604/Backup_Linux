#include"rdb-attr.cpp"
#include"rdb-join.cpp"
#include"rdb.h"
#include"rdb-basics.cpp"



int main()
{
	
	list<Record *> tecs;
	int nrecs = 2;

	vector<int> attrinds;

	int nattr = 3;

	vector<Attr *> attrvec;
	// vector<string> attrnames;
	string input = "ritesh";
	attrvec.push_back(new stringAttribute(input));
	int num = 1023;
	attrvec.push_back(new integerAttribute(num));
	float flt = 303.32;
	attrvec.push_back(new floatAttribute(flt));

	

	vector<string> columnnames;
	columnnames.push_back("stringthing");
	columnnames.push_back("integerthing");
	columnnames.push_back("floatattr");

	tecs.push_back(new Record(attrvec));



	//vector<int> attrinds2;

	int nattr2 = 3;

	vector<Attr *> attrvec2;

	string input2 = "ritesh2";
	attrvec2.push_back(new stringAttribute(input2));
	int num2 = 10232;
	attrvec2.push_back(new integerAttribute(num2));
	float flt2 = 303.322;
	attrvec2.push_back(new floatAttribute(flt2));

	
	
	attrinds.push_back(0);
	attrinds.push_back(1);
	attrinds.push_back(2);
	tecs.push_back(new Record(attrvec2));
	//cout<<attrinds[0];
	Relation *rel = new Relation(tecs, nrecs, attrinds, columnnames);


	rel->print_rel();



	list<Record *> tecs2;
	int nrecs3 = 2;

	vector<int> attrinds3;

	int nattr3 = 3;

	vector<Attr *> attrvec3;
	
	string input3 = "ritesh";
	attrvec3.push_back(new stringAttribute(input3));
	int num3 = 1000;
	attrvec3.push_back(new integerAttribute(num3));
	float flt3 = 30.000;
	attrvec3.push_back(new floatAttribute(flt3));

	attrinds3.push_back(0);
	attrinds3.push_back(1);
	attrinds3.push_back(2);

	vector<string> columnnames3;
	columnnames3.push_back("stringthing");
	columnnames3.push_back("integerthing");
	columnnames3.push_back("floatattr");

	tecs2.push_back(new Record(attrvec3));



	int nattr4 = 3;

	vector<Attr *> attrvec4;

	string input4 = "ritesh2";
	attrvec4.push_back(new stringAttribute(input4));
	int num4 = 10232;
	attrvec4.push_back(new integerAttribute(num4));
	float flt4 = 303.322;
	attrvec4.push_back(new floatAttribute(flt4));
	tecs2.push_back(new Record(attrvec4));

	Relation *rel2 = new Relation(tecs2,nrecs3,attrinds3,columnnames3);
	

	
	
	rel2->print_rel();

	cout<<"done";
	Relation *temp = Union(rel,rel2);
	cout << endl;
	temp->print_rel();
}