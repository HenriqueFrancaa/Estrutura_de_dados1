#include <stdio.h>
#include "float_vector.h"

int main(){
    FloatVector *vec = create(10);
    
    print(vec);
    append(vec,0.0);
    append(vec,1.0);
    append(vec,2.0);
    append(vec,3.0);

    print(vec);

    destroy(&vec);
        
    return 0;
}

