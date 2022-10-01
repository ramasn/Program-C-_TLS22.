 //Nama : Rama Sulaiman Nurcahyo
 //NIU : 492727
 //Kelompok : Coulomb
 
 #include <iostream>
 using namespace std;
 
 
 int main()
 	{ 
 	
 	string lanjutkan="ya";														//Mendeklarasi variabel
 	
 	while(lanjutkan=="ya"||lanjutkan=="Ya"||lanjutkan=="YA"||lanjutkan=="yA")	//Untuk meloop program jika ingin menginput banyak angka
	 {
	 	
	 int bilangan, i = 2;														//Mendeklarasikan variabel
	 
 	 cout<<"Silahkan masukkan bilangan Anda : ";								//Mengoutput "Silahkan masukkan bilangan Anda : "		
 	 cin>>bilangan;																//Meminta pengguna untuk memasukkan sebuah bilangan
 	 cout<<"Faktorisasi prima dari bilangan tersebut adalah : ";
	  		
 	 if(bilangan==1)															//Jika angka yang diinput 1, maka tidak memiliki faktorisasi prima		
 	 	cout<<"-. 1 tidak memiliki faktorisasi prima.";
 	 	
 	 else
 	 
	 while (i<=bilangan)														//Jika bukan 1, maka akan memiliki faktorisasi prima. Akan dilakukan iterasi dari 2,3, dan seterusnya untuk mengecek apabila habis membagi bilangan tadi
	 	{
	 		
	 	if(bilangan%i==0)
	 		{
	 			int pangkat=0;
	 			while(bilangan%i==0)											//Jika terdapat bilangan i yang membagi habis, akan dihitung berapa kali i dapat membagi bilangan, yang akan menjadi sebuah faktorisasi i^k untuk suatu k
				 {
				 	
			 		bilangan/=i;
			 		pangkat++;
			 	}
				cout<<i<<"^"<<pangkat<<" ";
		 	}
		i++;
	 	}
	 	
	 cout<<endl<<"Ingin cek bilangan lain?(Ya/Tidak)"<<endl<<"Jawab : ";
	 cin>>lanjutkan;															//Apabila ingin lanjut menginput angka lain, inputkan "ya". Tidak masalah dengan huruf kapital atau tidak.
	 cout<<endl<<endl;
	}
	cout<<"Program telah selesai dijalankan. "<<endl;
	system("pause");
 		return 0;
	 }