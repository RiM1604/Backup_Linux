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

	virtual Attr*clone()
    {
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

	
    Attr*clone()
    {
        return new stringAttribute(*this);
    }

	void print()
	{
		cout <<value<<" ";
	}//virtual printing function

	stringAttribute(string input_value)
	{
		value=input_value;
	}

	bool operator==(const stringAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const stringAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const stringAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const stringAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const stringAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const stringAttribute &right)
	{
		if (value >= right.value)
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
};

class integerAttribute : public Attr
{
private:
	int value;

public:

	void print()
	{
		cout <<value<<" ";
	}//virtual printing func for int

	
	integerAttribute(int input_value)
	{
		value=input_value;
	}


	bool operator==(const integerAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const integerAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const integerAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const integerAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const integerAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const integerAttribute &right)
	{
		if (value >= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	
};

class floatAttribute : public Attr
{
private:
	float value;

public:
	
	void print()
	{
		cout<<value<<" ";
	}//virtual print func for float

	floatAttribute(float input_value)
	{
		value=input_value;
	}


	bool operator==(const floatAttribute &right)
	{

		if (value == right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(const floatAttribute &right)
	{
		if (value == right.value)
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	bool operator<(const floatAttribute &right)
	{
		if (value < right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator<=(const floatAttribute &right)
	{
		if (value <= right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>(const floatAttribute &right)
	{
		if (value > right.value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator>=(const floatAttribute &right)
	{
		if (value >= right.value)
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
};



class Record
{
	vector<Attr *> attrptr;
	//vector<string> columnnamesrec; // for printing attrnames
	//vector<int> attrindsrec;	 // to get attrinds outside the constructor scope

public:
	Record &operator=(const Record &re)
	{
		//attrnamesrec = re.attrnamesrec;
		//attrindsrec = re.attrindsrec;
		auto itcopy = attrptr.begin();
		for (auto it = re.attrptr.begin(); it != attrptr.end(); it++) // copying values from give re to the give vector of attr*
		{
			//auto type = re.attrnamesrec.begin();
				// dynamic_cast<Attr*>//dynamic cast not allowed
				attrptr.push_back((*it)->clone());//using virtual copy constructor
			
		}

		return *this;//returning the copy assigned value
	}

	Record()
	{

	}

	

	Record(vector<Attr*> _attributes)
	{
		
		// for (int i = 0; i < attrinds.size(); i++)
		// {
		// 	attrindsrec.push_back(attrinds[i]);
        // }//getting values outside scope

		
		for (int i = 0; i < _attributes.size(); i++)
		{
			attrptr.push_back(_attributes[i]);	
		}//storing in record from the given <Arr*>
	}
	void print_record()
	{
		for (int i = 0; i < attrptr.size(); i++)
		{
			//cout << "attribute name:" << attrnamesrec[j]<<" ";
			//int j = attrindsrec[i];
			attrptr[i]->print();
            cout<<" ";
		}
	}

     friend Relation* projection(Relation*, list<string>);
	
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
		attrinds = R1.attrinds;
		attrnames = R1.attrnames;
        recs.resize(R1.nrecs);

		auto itcopy = recs.begin();
		//(*itcopy)->print_record();
		recs.resize(nrecs);
		for (auto it = R1.recs.begin(); it!= R1.recs.end(); it++)
		{	
			*itcopy = *it;
			itcopy++;
		}
		return *this;
	}

	Relation()
	{
		nattr=0;
		nrecs=0;
	}

	Relation(const Relation&R1)
	{

		nattr = R1.nattr;
		nrecs = R1.nrecs;
		attrinds = R1.attrinds;
		attrnames = R1.attrnames;
        recs.resize(R1.nrecs);

		auto itcopy = recs.begin();
		//(*itcopy)->print_record();
		recs.resize(nrecs);
		for (auto it = R1.recs.begin(); it!= R1.recs.end(); it++)
		{	
			*itcopy = *it;
			itcopy++;
		}

	}

	Relation(list<Record*>records,int nrecords,vector<int>attrindsrecords,vector<string>names)
	{
		nrecs=nrecords;
        nattr=names.size();
		for(int i = 0; i < attrinds.size(); i++)
		{
			attrinds.push_back(attrindsrecords[i]);
		}
		
		for(int i = 0; i < names.size(); i++)
		{
			attrnames.push_back(names[i]);
		}
        recs.resize(nrecs);
        auto it2=recs.begin();
		for(auto it= records.begin(); it!=records.end(); it++)
		{
            *it2=*it;
            it2++;
		}
	}

	void print_rel()
	{	
        //cout<<"entered here"<<endl;
		int i=0;

		if(recs.size()==0)
		{
			cout<<"no records to print"<<endl;
		}else
		{
			cout<<"no";
			for(int i = 0; i < attrnames.size(); i++)
			{
				cout<<attrnames[i]<<" ";
				
			}
			cout<<endl;
			for (auto it = recs.begin(); it != recs.end(); ++it)
			{
				//cout<<"Attri "<<i+1<<":";
					(*it)->print_record();

			}

		}
	}

    // Relation*difference(Relation* R1, Relation*R2)
    // {
        
    // }

    // Relation*rename()

	friend Relation*rename(Relation*, string , string );
	//friend function for renaming
    friend Relation*projection(Relation*, list<string>);

	friend Relation*difference(Relation*, Relation*R1);
};

Relation* rename(Relation*R1, string s1, string s2)
{
	
	Relation *s =new Relation(*R1);
	cout<<"renmaed func"<<endl;
	//s->print_rel();
	//cout<<endl;
	for(int i = 0; i < R1->attrnames.size() ; i++)
	{
		if(s->attrnames[i]==s1)
		{
			s->attrnames[i]=s2;
		}
	}
	// for(int i = 0; i < s->attrnames.size(); i++)
	// {
	// 	cout<<s->attrnames[i]<<" ";
	// }
	//s->print_rel();
	
	return s;
};


Relation* projection(Relation*R1,list<string>projectattrs)
{
    Relation*s= new Relation();
	s->recs.resize(R1->nrecs);
    
    for(auto it=projectattrs.begin(); it!=projectattrs.end();it++)
    {
		int counter=0;
		//auto it5=R1->recs.begin();
		for(auto it5 = R1->recs.begin(); it5 != R1->recs.end(); it5++)
		
		{
            Record*temp2=*it5;


			for(auto  it3=temp2->attrptr.begin() ; it3!= temp2->attrptr.end(); it3++)
				{
					if(*it==R1->attrnames[counter])
					{
							vector<Attr*> temp5;
							temp5.push_back((*it3)->clone());	
							Record temp6(temp5);
							Record *temp7=&temp6;
							(s->recs).push_back(temp7);		
					}
					counter++;
			}
				
			
		}
        //for(auto  it2 = s->recs.begin(); it2!= s->recs.end(); it2++)
        //{
			//*it2=new Record();
			//Record*temp=*it2;
			
   		 //}
	}
    return s;
}


// Relation* Union(Relation* R1, Relation* R2)
// {

// }

Relation*difference(Relation *R1, Relation*R2)
{	
	//cout<<R1->recs.size();
	Relation*s=R1;
	for(int i = 0; i < s->nattr; i++)
	{
		for(auto  it = s->recs.begin(); it!= s->recs.end(); it++)
		{
			for(auto  it2 = R2->recs.begin(); it2!= R2->recs.end(); it2++)
			{	
				cout<<"enter"<<endl;
				if(it==s->recs.end()){
					break;
				}
				if((*it)==(*it2)&&(s->attrnames[i]==R2->attrnames[i])&&(it2!=R2->recs.end())&&(it!=s->recs.end()))
				{	
					if((++it)==s->recs.end())
					{
						s->recs.pop_back();
					}else
					{
						s->recs.erase(it);
					}
				}
				// Record*s1=*it;
				// Record*s2=*it2;
				// cout<<"printint 1";
				// s1->print_record();
				// cout<<endl;
				// cout<<"printing 2";
				// s2->print_record();			
				}	

		}
		
	}
	return s;
}






int main()
{
	// int nattr = 2, nrecs = 1;
	// vector<int> attrinds;
	// attrinds.push_back(1);
	// attrinds.push_back(0);
	// vector<string>attrnames;
    // attrnames.push_back("integeratt");
    // attrnames.push_back("stringatt");
	// Attr *p = new integerAttribute(3);
	// Attr *q = new stringAttribute("ritesh");
	// vector<Attr *> vec = {p, q};
	// Record*r=new Record(vec,attrnames,attrinds);
    // r->print_record();

	// Record*s=r;
    // cout<<" done"<<endl;
    // s->print_record();

	list<Record*>tecs;
	int nrecs=2;
	
	vector<int>attrinds;
	
            int nattr=3;
            
          
			vector<Attr*> attrvec;
			//vector<string> attrnames;
            string input="ritesh";
            attrvec.push_back(new stringAttribute(input));
            int num=1023;
            attrvec.push_back(new integerAttribute(num));
            float flt=303.32;
            attrvec.push_back(new floatAttribute(flt));
            
            cout<<"0 for string 1 for integer 2 for float"<<endl;
            //attrnames.push_back("stringattr");
            //attrnames.push_back("integerattr");
            //attrnames.push_back("floatattr");
			attrinds.push_back(0);
			attrinds.push_back(1);
			attrinds.push_back(2);

			vector<string>columnnames;
			columnnames.push_back("stringthing");
			columnnames.push_back("integerthing");
			columnnames.push_back("floatattr");

			tecs.push_back(new Record(attrvec));
		


    //(tecs.front())->print_record();
	//rel.print_rel();


	// Relation s(nattr, nrecs, attrinds);
    //cout<<"after copying"<<endl;
	
	


//part till first relation


	//int nrecs2=1;
	
	vector<int>attrinds2;
	
            int nattr2=3;
            
          
			vector<Attr*> attrvec2;
			
            string input2="ritesh2";
            attrvec2.push_back(new stringAttribute(input2));
            int num2=10232;
            attrvec2.push_back(new integerAttribute(num2));
            float flt2=303.322;
            attrvec2.push_back(new floatAttribute(flt2));
            
            //cout<<"0 for string 1 for integer 2 for float"<<endl;
            // attrnames2.push_back("stringattr2");
            // attrnames2.push_back("integerattr2");
            // attrnames2.push_back("floatattr2");
			attrinds.push_back(3);
			attrinds.push_back(4);
			attrinds.push_back(5);

			columnnames.push_back("stringthing2");
			columnnames.push_back("integerthing2");
			columnnames.push_back("floatattr2");
			tecs.push_back(new Record(attrvec2));
		Relation*rel =new Relation(tecs,nrecs,attrinds,columnnames);
   // Relation rel(tecs,nrecs,attrinds,columnnames);

    //Relation rel2(tecs2,nrecs2,attrinds2,columnnames2);
    //(tecs.back())->print_record();
	//rel2.print_rel();


	// Relation s(nattr, nrecs, attrinds);
	Relation r2 = *rel;
	delete rel;
	r2.print_rel();
    list<string>project;
    // string s1="stringthing";
    // string s2="stringchanged";
    // Relation*temp=rename(&r2,s1,s2);
    // temp->print_rel();
    // cout<<endl;
    // cout<<endl;
	// r2.print_rel();
    project.push_back("integerthing");
    Relation*temp2= projection(&r2,project);
	cout<<"projection"<<endl;
    //Relation*temp=projection(&r2,project);
    temp2->print_rel();

	// Relation*temp3= difference(&r2,&r2);
	// temp3->print_rel();
	// cout<<"nothing printed";

	
	

    
}