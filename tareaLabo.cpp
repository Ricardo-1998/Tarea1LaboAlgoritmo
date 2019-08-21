int sumMatrices(int a[][3], int b[][3],int c[][3],int i,int j){
	
	c[i][j]= a[i][j]+b[i][j];
	if((i==2) && (j==2)){
		mostrarMatriz(c);
	}else{
		if(j==2){
			i++;
			j=0;
			return sumMatrices(a,b,c,i,j);
		}else{
			j++;
			return sumMatrices(a,b,c,i,j);
		}	
	}
}

int elevacionRecursiva(int x, int n){
	if(n==1){
		return x;
	}else{
		return x*elevacionRecursiva(x,n-1);
	}
}

int menorValor(int a[],int n,int cont, int r){
	
	if(cont==n-2){	
		if(r>a[cont+1]){
			return a[cont+1];
		}
		return r;
	}
	else{
		//cout << cont;
		if(r<a[cont+1]){
			//cout << r << endl;
			return menorValor(a,n,cont+1,r);
		}
		else{
			r=a[cont+1];
			//cout << r << endl;
			return menorValor(a,n,cont+1,r);
		}
	}
	
}

int main(){
	
	int a[][3]= {{1,1,1},{1,2,3},{2,2,2}};
	int b[][3]= {{0,1,2},{3,3,3},{5,6,7}};
	int c[3][3];
	int myarray[6]={9,10,9,11,1,5};
	
	
	
	//sumMatrices(a,b,c,0,0);
	//cout<< elevacionRecursiva(4,3);
	//cout << menorValor(myarray,sizeof(myarray)/sizeof(*myarray),0,myarray[0]);
}
