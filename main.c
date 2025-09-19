#include <>stdio.h


typedef struct RubiksCube{
    int face_1[3][3];
    int face_2[3][3];
    int face_3[3][3];
    int face_4[3][3];
    int face_5[3][3];
    int face_6[3][3];
}cube;

cube Creat_New_Cube(){
    cube Cube;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            Cube.face_1[i][j]=1;
            Cube.face_2[i][j]=2;
            Cube.face_3[i][j]=3;
            Cube.face_4[i][j]=4;
            Cube.face_5[i][j]=5;
            Cube.face_6[i][j]=6;
        }
    }
    return Cube;
}

void Display_the_Cube(){

    for(int i = 0 ; i < 15 ; i++){
        for()
    }

}


int main{
    cube Cube = Creat_New_Cube();

    
}