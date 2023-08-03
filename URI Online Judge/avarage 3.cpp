#include <bits/stdc++.h>
using namespace std;
int main()
{

	double sum,n1,n2,n3,n4,score,media;
	cin>>n1>>n2>>n3>>n4;
	media = (n1*2+n2*3+n3*4+n4*1)/10.0;
	printf("Media: %0.1lf\n", media);
	if (media >= 7.0)
	{
		cout<<"Aluno aprovado."<<endl;
	}
	else if (media >= 5.0  && media <= 6.9)
	{
		cout<<"Aluno em exame."<<endl;
		cin>>score;
        printf("Nota do exame: %.1lf\n", score);
        sum = (media + score) / 2.0;
        if (sum >= 5.0)
            cout<<"Aluno aprovado."<<endl;
        else if (sum < 4.9)
            cout<<"Aluno reprovado."<<endl;
        printf("Media final: %.1f\n", sum);
	}
	else if (media < 5.0)
	{
		cout<<"Aluno reprovado."<<endl;
	}
	return 0;
}

