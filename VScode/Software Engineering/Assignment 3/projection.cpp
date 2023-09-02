#include <bits/stdc++.h>
using namespace std;
class Attr;
class Record;
class Relation;
class Attr
{
public:
	virtual bool operator==(const Attr &right)
	{
		return false;
	};

	virtual bool operator!=(const Attr &right)
	{
		return false;
	};

	virtual bool operator<(const Attr &right)
	{
		return false;
	};

	virtual bool operator<=(const Attr &right)
	{
		return false;
	};

	virtual bool operator>=(const Attr &right)
	{
		return false;
	};

	virtual void print()
	{
		cout << "entered base class" << endl;
	}

	virtual Attr *clone()
	{
		cout<<"yes";
		return NULL;
	}

	
	// virtual getvalue()
	// {
	// 	cout<<"value is not there in Attr"<<endl;
	// }
};

class stringAttribute : public Attr
{
private:
	string value;

public:

	Attr *clone()
	{
		return new stringAttribute(*this);
	}
	
	void print()
	{
		cout << value << " ";
	} // virtual printing function

	stringAttribute(string input_value)
	{
		value = input_value;
	}

	bool operator==(const Attr &right)
	{
		if (value == ((const stringAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const Attr &right)
	{
		if (value == ((const stringAttribute &)right).value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const Attr &right)
	{
		if (value < ((const stringAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const Attr &right)
	{
		if (value <= ((const stringAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const Attr &right)
	{
		if (value > ((const stringAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const Attr &right)
	{
		if (value >= ((const stringAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// string getvalue()
	// {
	// 	return value;
	// }
	friend Relation *projection(Relation *, list<string>);
};

class integerAttribute : public Attr
{
private:
	int value;

public:
	void print()
	{
		cout << value << " ";
	} // virtual printing func for int
	Attr *clone()
	{
		return new integerAttribute(*this);
	}

	integerAttribute(int input_value)
	{
		value = input_value;
	}

	bool operator==(const Attr &right)
	{

		if (value == ((const integerAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const Attr &right)
	{
		if (value == ((const integerAttribute &)right).value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const Attr &right)
	{
		if (value < ((const integerAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const Attr &right)
	{
		if (value <= ((const integerAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const Attr &right)
	{
		if (value > ((const integerAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const Attr &right)
	{
		if (value >= ((const integerAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend Relation *projection(Relation *, list<string>);
};

class floatAttribute : public Attr
{
private:
	float value;

public:
	void print()
	{
		cout << value << " ";
	} // virtual print func for float

	floatAttribute(float input_value)
	{
		value = input_value;
	}

	Attr *clone()
	{
		return new floatAttribute(*this);
	}

	bool operator==(const Attr &right)
	{

		if (value == ((const floatAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const Attr &right)
	{
		if (value == ((const floatAttribute &)right).value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const Attr &right)
	{
		if (value < ((const floatAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const Attr &right)
	{
		if (value <= ((const floatAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const Attr &right)
	{
		if (value > ((const floatAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const Attr &right)
	{
		if (value >= ((const floatAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// float getvalue()
	// {
	// 	return value;
	// }
	friend Relation *projection(Relation *, list<string>);
};

class doubleAttribute : public Attr
{
private:
	double value;

public:
	void print()
	{
		cout << value << " ";
	} // virtual print func for float

	doubleAttribute(float input_value)
	{
		value = input_value;
	}

	Attr *clone()
	{
		return new doubleAttribute(*this);
	}

	bool operator==(const Attr &right)
	{

		if (value == ((const doubleAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const Attr &right)
	{
		if (value == ((const doubleAttribute &)right).value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const Attr &right)
	{
		if (value < ((const doubleAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const Attr &right)
	{
		if (value <= ((const doubleAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const Attr &right)
	{
		if (value > ((const doubleAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const Attr &right)
	{
		if (value >= ((const doubleAttribute &)right).value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	// float getvalue()
	// {
	// 	return value;
	// }
	friend Relation *projection(Relation *, list<string>);
};

class Record
{
	vector<Attr *> attrptr;
	// vector<string> columnnamesrec; // for printing attrnames
	// vector<int> attrindsrec; // to get attrinds outside the constructor scope

public:
	bool operator==(const Record &re)
	{
		int flag=0;
		int sre= (re.attrptr).size();
		if(sre!=attrptr.size())
		{
			flag=1;
		}
		for(int i = 0; i< attrptr.size(); i++)
		{
			if(*(attrptr[i])!=*(re.attrptr[i]))
			{
				flag=1;
			}
		}
		//cout<<"flag"<<flag<<endl;

		if(flag==1)
		{
			return false;
		}else 
		{
			return true;
		}
	}

	Record &operator=(const Record &re)
	{
		// attrnamesrec = re.attrnamesrec;
		// attrindsrec = re.attrindsrec;
		//auto itcopy = attrptr.begin();
		for (auto it = re.attrptr.begin(); it != re.attrptr.end(); it++) // copying values from give re to the give vector of attr*
		{
			// auto type = re.attrnamesrec.begin();
			//  dynamic_cast<Attr*>//dynamic cast not allowed
			Attr* temp= *it;
			attrptr.push_back(temp->clone()); // using virtual copy constructor
		}

		return *this; // returning the copy assigned value
	}
	Record()
	{
	}

	Record(vector<Attr *> _attributes)
	{

		// for (int i = 0; i < attrinds.size(); i++)
		// {
		// 	attrindsrec.push_back(attrinds[i]);
		// }//getting values outside scope

		for (int i = 0; i < _attributes.size(); i++)
		{
			attrptr.push_back(_attributes[i]->clone());
		} // storing in record from the given <Arr*>
	}

	// Record(vector<Attr *> _attributes)
	// {

	// 	for (int i = 0; i < _attributes.size(); i++)
	// 	{
	// 		attrptr.push_back(_attributes[i]);
	// 	} // storing in record from the given <Arr*>
	// }
	void print_record()
	{
		for (int i = 0; i < attrptr.size(); i++)
		{
			// cout << "attribute name:" << attrnamesrec[j]<<" ";
			// int j = attrindsrec[i];
			attrptr[i]->print();
			cout << " ";
		}
	}

	friend Relation *projection(Relation *, list<string>);
	friend Relation *Union(Relation *, Relation *);
	friend Relation *difference(Relation*, Relation*);
	friend Relation *cartesianproduct(Relation*, Relation*);
};

class Relation
{
	int nattr, nrecs;
	vector<int> attrinds;
	vector<string> attrnames;
	list<Record *> recs;

public:
	Relation &operator=(const Relation &R1)
	{

		nattr = R1.nattr;
		nrecs = R1.nrecs;
		for (int i = 0; i < R1.attrinds.size(); i++)
		{
			// attrinds.push_back(R1.attrinds[i]);
			attrnames.push_back(R1.attrnames[i]);
		}
		recs.resize(R1.nrecs);
		auto itcopy = recs.begin();
		for (auto it = R1.recs.begin(); it != R1.recs.end(); it++)
		{
			Record* temp= *itcopy;
			Record* temp2= *it;
			*temp = *temp2;
			//*itcopy = *it;
			itcopy++;
		}
		return *this;
	}

	Relation()
	{
		nattr = 0;
		nrecs = 0;
	}

	Relation(const Relation &R1)
	{

		nattr = R1.nattr;
		nrecs = R1.nrecs;

		for (int i = 0; i < R1.attrnames.size(); i++)
		{
			// attrinds.push_back(R1.attrinds[i]);
			attrnames.push_back(R1.attrnames[i]);
		}
		recs.resize(R1.nrecs);

		auto itcopy = recs.begin();
		//(*itcopy)->print_record();
		//recs.resize(nrecs);
		for (auto it = R1.recs.begin(); it != R1.recs.end(); it++)
		{
			Record* temp= *itcopy;
			Record* temp2= *it;
			*temp = *temp2;
			//*itcopy = *it;
			itcopy++;
		}
	}

	Relation(list<Record *> records, int nrecords, vector<int> indices, vector<string> names)
	{
		nrecs = nrecords;
		for (int i = 0; i < attrinds.size(); i++)
		{
			attrinds.push_back(indices[i]);
		}

		for (int i = 0; i < names.size(); i++)
		{
			attrnames.push_back(names[i]);
		}
		recs.resize(nrecs);
		auto it2 = recs.begin();
		for (auto it = records.begin(); it != records.end(); it++)
		{
			*it2 = *it;
			it2++;
		}
	}

	void print_rel()
	{
		// cout<<"entered here"<<endl;
		int i = 0;
		auto it = recs.begin();
		for (int i = 0; i < attrnames.size(); i++)
		{
			// cout<<i;
			// int j=attrinds[i];
			cout << attrnames[i] << " ";
		}
		cout << endl;
		// cout<<recs.size();
		for (auto it = recs.begin(); it != recs.end(); it++)
		{
			(*it)->print_record();
			cout << endl;
		}
		// for (auto it = recs.begin(); it != recs.end(); ++it)
		// {
		// cout<<"Attri "<<i+1<<":";
		// cout<<"next";
		//}
	}

	// Relation*difference(Relation* R1, Relation*R2)
	// {

	// }

	// Relation*rename()

	friend Relation *rename(Relation *, string, string);
	// friend function for renaming
	friend Relation *projection(Relation *, list<string>);
	friend Relation *Union(Relation *, Relation *);
	friend Relation *difference(Relation*, Relation*);
	friend Relation *cartesianproduct(Relation*, Relation*);
};

Relation *rename(Relation *R1, string s1, string s2)
{
	Relation *s = R1;
	cout << "renmaed func" << endl;
	// s->print_rel();
	// cout<<endl;
	for (int i = 0; i < R1->attrnames.size(); i++)
	{
		if (s->attrnames[i] == s1)
		{
			s->attrnames[i] = s2;
		}
	}
	// for(int i = 0; i < s->attrnames.size(); i++)
	// {
	// 	cout<<s->attrnames[i]<<" ";
	// }
	// s->print_rel();
	return s;
};

Relation *projection(Relation *R1, list<string> projectattrs)
{
	Relation *s = new Relation();
	// s->recs.resize(R1->nrecs);
	// vector<int>inds;

	// for (auto it = projectattrs.begin(); it != projectattrs.end(); it++)
	//{

	// auto it5=R1->recs.begin();
	for (auto it5 = R1->recs.begin(); it5 != R1->recs.end(); it5++)
	{
		Record *temp2 = *it5;
		vector<Attr *> temp5;

		for (auto it = projectattrs.begin(); it != projectattrs.end(); it++)
		{
			int counter = 0; // same index for different records

			for (auto it3 = temp2->attrptr.begin(); it3 != temp2->attrptr.end(); it3++)
			{

				if (*it == R1->attrnames[counter])
				{
					// cout<<"value";
					// cout<<*it;
					temp5.push_back((*it3)->clone());
					// cout << (*it3)->clone();
					// Record temp6(temp5);
					// Record *temp7 = &temp6;
					// temp7->print_record();
					// cout<<s->recs.size();
				}
				counter++;
			}
		}
		(s->recs).push_back(new Record(temp5));
	}

	//}
	// for(auto  it2 = s->recs.begin(); it2!= s->recs.end(); it2++)
	//{
	//*it2=new Record();
	// Record*temp=*it2;
	for (auto projit = projectattrs.begin(); projit != projectattrs.end(); projit++)
	{
		for (auto nameit = R1->attrnames.begin(); nameit != R1->attrnames.end(); nameit++)
		{
			if ((*nameit) == (*projit))
			{
				// cout<<*nameit;
				s->attrnames.push_back(*nameit);
			}
		}
	}

	// for(auto projit = projectattrs.begin(); projit!=projectattrs.end() ; projit++)
	// {
	// 	for(auto  nameit= R1->attrinds.begin(); nameit!=R1->attrid.end(); nameit++)
	// 	{
	// 		if((*nameit)==(*projit))
	// 		{
	// 			//cout<<*nameit;
	// 			s->attrnames.push_back(*nameit);
	// 		}
	// 	}

	// }

	for (int i = 0; i < s->attrnames.size(); i++)
	{
		s->attrinds.push_back(i);
	}

	return s;
}

Relation *Union(Relation *R1, Relation *R2)
{

	Relation *l = new Relation(*R1);
	Relation *r = new Relation(*R2);
	Relation *s = new Relation();
	Relation *rn = new Relation();
	l->print_rel();
	cout<<"right rel"<<endl;
	r->print_rel();
	//vector<pair<int,Attr*>>p;
	int flag = 0;
	int counter=0;
	vector<int>indices;
	// auto it2=r->attrnames.begin();
	for (auto k = 0; k< l->attrnames.size(); k++)//sorting names
	{
		//int i = 0;
		for (auto f=0; f < r->attrnames.size(); f++)
		{
			//int j = 0;
			if ((l->attrnames[k]) == (r->attrnames[f]))
			{
				indices.push_back(f);
			}
			//j++;
		}
		//i++;
	}//getting initial indices


	for (auto k = 0; k< l->attrnames.size(); k++)//sorting names
	{
		//int i = 0;
		for (auto f=0; f < r->attrnames.size(); f++)
		{
			//int j = 0;
			if ((l->attrnames[k]) == (r->attrnames[f]))
			{
				counter++;
				r->attrnames[f] = r->attrnames[k];
				r->attrnames[k] = l->attrnames[k];
			}
			//j++;
		}
		//i++;
	}//sorting names
	
	for(int i = 0; i < indices.size(); i++)
			{
				cout<<indices[i]<<endl;
			}

	
		for(auto it1 = r->recs.begin(); it1!= r->recs.end(); it1++)
		{
			Record*rtemp=*it1;
			//int counter2=0;

			for(int i = 0; i < indices.size(); i++)
			{
				Attr* temp3;
				temp3 = rtemp->attrptr[i];
				rtemp->attrptr[i]=rtemp->attrptr[indices[i]];
				rtemp->attrptr[indices[i]]=temp3;
				int change;
				for(int j = 0; j < indices.size(); j++)
				{
					if(indices[j]==i)
					{
						change=j;
					}
				}
				indices[change]=indices[i];
				indices[i]=i;
			}//sorted according to attrnames sort

			// for(int i = 0; i < ltemp->attrptr.size(); i++)
			// {
			// 	for(int j=0; j<rtemp->attrptr.size(); j++)
			// 	{
			// 		Attr* value1= ltemp->attrptr[i];
			// 		Attr* value2= rtemp->attrptr[j];
			// 		if((*value1)==(*value2))
			// 		{
			// 			rtemp->attrptr[j]=rtemp->attrptr[i];
			// 			rtemp->attrptr[i]=ltemp->attrptr[i];
			// 			counter2++;
			// 		}
			// 	}
			// }
			
			// if(counter2==ltemp->attrptr.size())
			// {
			// 	flag2=1;
			// 	if(counter==l->attrnames.size())
			// 	{
			// 		s->recs.push_back(ltemp);
			// 	}else 
			// 	{
			// 		s->recs.push_back(ltemp);
			// 		s->recs.push_back(rtemp);
			// 	}
			// }
			
			
		}
	for(int i = 0; i < indices.size(); i++)
	{
		cout<<indices[i]<<endl;
	}
	
	r->print_rel();


	for(auto it = l->recs.begin(); it!=l->recs.end() ; it++)
	{
		int flag=0;
		for(auto it2= s->recs.begin(); it2!= s->recs.end(); it2++)
		{
			if(*(*it)==*(*it2))
			{
				cout<<"found";
				flag=1;
			}
		}
		if(flag==0)
		{
			//cout<<"new";
			s->recs.push_back(*it);
		}
		
	}
	for(auto it = r->recs.begin(); it!=r->recs.end() ; it++)
	{
		int flag=0;
		for(auto it2= s->recs.begin(); it2!= s->recs.end(); it2++)
		{
			if(*(*it)==*(*it2))
			{
				cout<<"found";
				flag=1;
			}
		}
		if(flag==0)
		{
			//cout<<"new";
			s->recs.push_back(*it);
		}
		
	}


	// for(auto it = l->recs.begin(); it!= l->recs.end(); it++)
	// {
	// 	int flag=0;
	// 	for(auto it2 = s->recs.begin(); it2!= s->recs.end(); it2++)
	// 	{
	// 		if((*it)==(*it2))
	// 		{
	// 			flag==1;
	// 		}	
	// 	}

	// 	if(flag==0)
	// 	{
	// 		s->recs.push_back(*it);
	// 	}
	// }


	// for(auto it = r->recs.begin(); it!= r->recs.end(); it++)
	// {
	// 	int flag=0;
	// 	for(auto it2 = s->recs.begin(); it2!= s->recs.end(); it2++)
	// 	{
	// 		if((*it)==(*it2))
	// 		{
	// 			flag==1;
	// 		}	
	// 	}

	// 	if(flag==0)
	// 	{
	// 		s->recs.push_back(*it);
	// 	}
	// }


	// if(counter==l->attrnames.size()){flag=1;};
	// //cout<<flag;

	// if(flag==1)
	// {

	// }

	for (auto i = 0; i < r->attrnames.size(); i++)
	{
		cout << (r->attrnames[i])<<" ";
	}

	// if (flag == 1)
	//  {


	// 	for(auto it = l->recs.begin(); it!=l->recs.end(); it++)
	// 	{
	// 		s->recs.push_back(*it);
	// 	}

	// 	for(auto i= 0; i< r->recs.size(); i++)
	// 	{
	// 		for(auto j=0; j<l->recs.size(); j++)
	// 		{
	// 			//if((l->recs[j])==(r->recs[i]))
	// 			{

	// 			}
	// 		}
	// 	}
	//  }

	
	return s;
	}

Relation* difference(Relation *R1, Relation*R2)
{
	Relation*s=new Relation();
	for(auto it = R1->recs.begin(); it!=R1->recs.end(); it++)
	{
		Record* temp= *it;
		int flag=0;
		for(auto it1 = R2->recs.begin(); it1!= R2->recs.end(); it1++)
		{
			Record* temp2= *it1;
			if((*temp)==(*temp2))
			{
				flag=1;
			}
			
		}
		if(flag==0)
		{
			s->recs.push_back(temp);
		}
	}
	return s;
}



Relation* cartesianproduct(Relation* R1, Relation *R2)
{
	Relation *l= new Relation(*R1);
	Relation *r= new Relation(*R2);
	Relation *s = new Relation();
	l->print_rel();
	cout<<endl;
	cout<<endl;
	r->print_rel();
	for(auto it = l->recs.begin(); it!= l->recs.end(); it++)
	{
		for(auto it1=r->recs.begin(); it1!= r->recs.end(); it1++)
		{
			Record* temp= *it;
			Record* temp2= (*it1);
			for(auto it3= temp2->attrptr.begin(); it3!= temp2->attrptr.end(); it3++)
			{
				temp->attrptr.push_back(*it3);
			}
			s->recs.push_back(temp);
			
		}
	}
	return s;
}

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

	// vector<int> attrinds2;

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
	// for (int i = 0; i < attrinds.size(); i++)
	// {
	// 	cout << attrinds[i] << endl;
	// }
	tecs.push_back(new Record(attrvec2));
	// cout<<attrinds[0];
	Relation *rel = new Relation(tecs, nrecs, attrinds, columnnames);

	//rel->print_rel();

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

	list<string> project;
	project.push_back("integerthing");
	// project.push_back("floatthing");
	// project.push_back("floatattr");
	// project.push_back("stringthing");
	// project.push_back;

	int nattr4 = 3;

	vector<Attr *> attrvec4;

	string input4 = "ritesh2";
	attrvec4.push_back(new stringAttribute(input4));
	int num4 = 10232;
	attrvec4.push_back(new integerAttribute(num4));
	float flt4 = 303.322;
	attrvec4.push_back(new floatAttribute(flt4));
	tecs2.push_back(new Record(attrvec4));

	Relation *rel2 = new Relation(tecs2, nrecs3, attrinds3, columnnames3);

	// for (int i = 0; i < attrinds3.size(); i++)
	// {
	// 	cout << attrinds3[i] << endl;
	// }

	//rel2->print_rel();

	cout << "done";
	//Relation *temp = cartesianproduct(rel, rel2);
	cout << endl;
	cout << endl;
	cout << endl;
	rel->print_rel();
	cout<<endl;
	cout<<endl;
	rel2->print_rel();
	Relation* temp= new Relation(*rel2);
	temp->print_rel();
	//temp->print_rel();
}