#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float N1,N2,N3,N4,MEDIA,EX;
    
    cin >> N1 >> N2 >> N3 >> N4;
    MEDIA  = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    cout << fixed << setprecision (1);
    cout << "Media: " << MEDIA << endl;
    if (MEDIA >= 7.0)
        {
        cout << "Aluno aprovado." << endl;
        }
    else if (MEDIA < 5.0)
            {
            cout << "Aluno reprovado." << endl;
            }
    else if ((MEDIA>=5.0) && (MEDIA <= 6.9))
        {
            cout << "Aluno em exame." << endl;
            cin >> EX;
            cout << "Nota do exame: " << EX << endl;
            MEDIA = (MEDIA + EX )/2;
                if (MEDIA >= 5.0)
                    {
                    cout << fixed << setprecision(1);
                    cout << "Aluno aprovado." << endl;
                    cout << "Media final: " << MEDIA << endl; 
                    }
                else 
                    {
                    cout << fixed << setprecision(1);
                    cout << "Aluno reprovado." << endl;
                    cout << "Media final: " << MEDIA << endl; 
                    }
                
        }
    return 0;
}
