class Apply{
    String name;
    int age;
    public void display(){
        System.out.println(name);
        System.out.println(age);
    }
    public void setvalues(String a,int b){
        name=a;
        age=b;
    }
}
class Main{
    public static void main(String[] args){
        Apply st1=new Apply();
        st1.name="Sakthi";
        st1.age=20;
        st1.display();
        
        Apply st2=new Apply();
        st2.setvalues("tsk",20);
        st2.display();
    }
}
