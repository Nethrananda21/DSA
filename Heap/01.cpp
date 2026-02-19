Heap-> a heap is a complete binary tree that follows heap order property
    -complete binary tree(cbt)->all levels are completely filled except the last level, the last level is filled from left to right
    -heap order property -> 1.Max heap-> Every parent node is greater than or equal to its children
                                         

    for any node(0 based indexing)
            left child = 2*i +1
            right child = 2*i+2
            parent = (i-1)/2