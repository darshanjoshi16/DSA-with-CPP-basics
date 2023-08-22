bool helper(int indx,int k,vector<int>&a){

    if(k==0){

        return true;

    }

    if(indx==a.size() && k!=0){

        return false;

    }

    if(k>=a[indx]){

       if( helper(indx+1,k-a[indx],a)==true)return true;

    } 

     if(helper(indx+1,k,a)==true)return true;

     return false;

}

 

bool isSubsetPresent(int n, int k, vector<int> &a)

{

    // Write your code here

    return helper(0,k,a);

}

