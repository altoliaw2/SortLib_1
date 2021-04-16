#include <iostream>
#include <algorithm>
struct UDSort{
    bool operator () (int& ir_FirstItem, int& ir_SecondItem){
        if(ir_FirstItem >= ir_SecondItem){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    int ia_Math[6]= {6, 52, 14, 33, 2, 11};
    std::sort(ia_Math, ia_Math + 6);
    for(int i_Ct=0; i_Ct< 6; i_Ct++){
        std::cout<< ia_Math[i_Ct]<< " ";
    }

    std::cout<< "\n";
    UDSort obj_UDSort;
    int ia_Math2[6]= {6, 52, 14, 33, 2, 11};
    std::sort(ia_Math2, ia_Math2 + 6, obj_UDSort);

    for(int i_Ct=0; i_Ct< 6; i_Ct++){
        std::cout<< ia_Math2[i_Ct]<< " ";
    }
    return 0;
}
