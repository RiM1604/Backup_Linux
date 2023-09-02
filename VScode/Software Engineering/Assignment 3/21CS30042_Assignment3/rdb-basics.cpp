Relation *rename(Relation *R1, string s1, string s2)
{
	Relation *s = R1;
	cout << "renmaed func" << endl;
	
	for (int i = 0; i < R1->attrnames.size(); i++)
	{
		if (s->attrnames[i] == s1)
		{
			s->attrnames[i] = s2;
		}
	}
	
	return s;
};



Relation *projection(Relation *R1, list<string> projectattrs)
{
	Relation *s = new Relation();
	
		for (auto it5 = R1->recs.begin(); it5 != R1->recs.end(); it5++)
		{
			Record *temp2 = *it5;
			vector<Attr *> temp5;

			for (auto it = projectattrs.begin(); it != projectattrs.end(); it++)
			{
				int counter = 0;//same index for different records
			
				for (auto it3 = temp2->attrptr.begin(); it3 != temp2->attrptr.end(); it3++)
				{
					
					if (*it == R1->attrnames[counter])
					{
						
						temp5.push_back((*it3)->clone());
					
					}
					counter++;
				}

			}
			(s->recs).push_back(new Record(temp5));

		}

		
	
	for(auto projit = projectattrs.begin(); projit!=projectattrs.end() ; projit++)
	{
		for(auto  nameit= R1->attrnames.begin(); nameit!=R1->attrnames.end(); nameit++)
		{
			if((*nameit)==(*projit))
			{
				
				s->attrnames.push_back(*nameit);
			}
		}
		
	}

	

	for(int i = 0; i < s->attrnames.size(); i++)
	{
		s->attrinds.push_back(i);
	}
	
	return s;
}




Relation* Union(Relation* R1, Relation* R2)
{

	Relation *l = new Relation(*R1);
	Relation *r = new Relation(*R2);
	Relation *s= new Relation();

	vector<pair<int,Attr*>> change;
	for(auto  it = l->recs.begin(); it!=l->recs.end() ; it++)
	{
		Record*temp=*it;
		int num=0;
		for(auto it2= r->recs.begin(); it2!= r->recs.end(); it2++)
		{
			Record*temp2=*it2;
			for(auto it3= temp->attrptr.begin(); it3!= temp->attrptr.end(); it3++)
			{
				for(auto it4 = temp2->attrptr.begin(); it4!= temp->attrptr.end(); it4++)
				{
					if(*it3==*it4)
					{
						Attr*temp5=*it4;
						int temp = num;
						pair<int,Attr*>ex={temp,temp5};
						change.push_back(ex);
					}
				}
			}
		};
		num++;
	}

	vector<Attr*> fornew;
	for(auto it = change.begin(); it!= change.end(); it++)
	{
		fornew.push_back((*it).second());
	}
	Record* temp6 ;
	for(auto it = s->recs.begin() ; it!=s->recs.end(); it++)
	{

		s->recs.push_back(temp6);
	}




}
