#include<stdio.h>
#include<math.h>
//Flores Lara Alberto 1BV1
int main(){
    int m_0, m_1, m_2, m_3, m_4, m_5, n;
    
	n=0;
    m_0=0;
    m_1=1;
    m_2=2;
    m_3=3;
    m_4=4;
    m_5=5;
    
    printf("A continuacion se muestran todos los datos de m y n que cumplen: m^4 + 5n^2 < 640: \n");

    for(m_0, n=0; (pow(m_0, 4)) + ((5)*(pow(n, 2))) < 640; n++){
		
		printf("m= %d y n= %d \n", m_0, n);
		
		}
    
    for(m_1, n=0; (pow(m_1, 4)) + ((5)*(pow(n, 2))) < 640; n++){
    	
		printf("m= %d , n =%d \n", m_1, n);
		
    	}
    
    for(m_2, n=0; (pow(m_2, 4)) + ((5)*(pow(n, 2))) < 640; n++){
    	
        printf("m= %d , n= %d \n", m_2, n);
        
		}

    for(m_3, n=0; (pow(m_3, 4)) + ((5)*(pow(n, 2))) < 640; n++){
    	
        printf("m= %d , n= %d \n", m_3, n);
    	
		}
    
    for(m_4, n=0; (pow(m_4, 4)) + ((5)*(pow(n, 2))) < 640; n++){
    	
        printf("m= %d , n= %d \n", m_4, n);
        
        }

    for(m_5, n=0; (pow(m_5, 4)) + ((5)*(pow(n, 2))) < 640; n++){
    	
        printf("m= %d , n= %d \n", m_5, n);
    
		}
	 
    return 0;
    
}