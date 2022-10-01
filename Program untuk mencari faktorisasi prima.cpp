 #include <iostream>
 using namespace std;
 
 
 int main()
 	{ 
 	
 	string lanjutkan="ya";														
 	
 	while(lanjutkan=="ya"||lanjutkan=="Ya"||lanjutkan=="YA"||lanjutkan=="yA")	
	 {
	 	
	long long bilangan, i = 2;														
	 
 	 cout<<"Silahkan masukkan bilangan Anda : ";									
 	 cin>>bilangan;															
 	 cout<<"Faktorisasi prima dari bilangan tersebut adalah : ";
	  		
 	 if(bilangan==1)															
 	 	cout<<"-. 1 tidak memiliki faktorisasi prima.";
 	 	
 	 else
 	 
	 while (i<=bilangan)														
	 	if(bilangan%i==0)
	 		{
	 			long long pangkat=0;
	 			while(bilangan%i==0)											
				 {
				 	
			 		bilangan/=i;
			 		pangkat++;
			 	}
				cout<<i<<"^"<<pangkat<<" ";
		 	}
		i++;
	 	}
	 	
	 cout<<endl<<"Ingin cek bilangan lain?(Ya/Tidak)"<<endl<<"Jawab : ";
	 cin>>lanjutkan;															
	 cout<<endl<<endl;
	}
	cout<<"Program telah selesai dijalankan. "<<endl;
	system("pause");
 		return 0;
	 }