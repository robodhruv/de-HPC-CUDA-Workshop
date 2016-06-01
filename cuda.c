__global__ void kernel() {
 
}

int main()
{
  kernel<<<1,1>>>();   //kernel launch statment 

 printf("Hello, World!\n");
return
}



//__global__ : Runs on device  (GPU)
// called from Host code

// nvcc splits source file into host and device components
// nvidia compiler handles kernel

// triple angle brackets mark a call from host code to device code or a kernel launch 

// kernel launch syntax: kernelName<<<numBlocks, numThreadsPerBlock>>> (kernel arguments)


//Blocks are virtual entities. 

// one thread runs on one core , if num of threads exceed, rescheduling on SMs happens 
// data is threads. 
// SM and core are real entities 
// data is executed as blocks of threads 

