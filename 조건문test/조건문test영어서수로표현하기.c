int main(){
int a;
scanf("%d",&a);
if(a/10==1){
     printf("%dth",a);}	
else if(a%10==1){
     printf("%dst",a);}	
else if(a%10==2){
     printf("%dnd",a);}
else if(a%10==3){
     printf("%drd",a);}
else printf("%dth",a);} 
