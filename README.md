## OS LAB EXPERIMENTS

#### Best fit implementation

```
Enter number of processes:4
Enter size of each process:
P[1]:212
P[2]:417
P[3]:112
P[4]:426
Enter number of blocks:5
Enter size of each block:
B[1]:100
B[2]:500
B[3]:200
B[4]:300
B[5]:600
Block   Size    Process Size    Status
B[1]    100     0       0       Not Allocated
B[2]    500     2       417     Allocated
B[3]    200     3       112     Allocated
B[4]    300     1       212     Allocated
B[5]    600     4       426     Allocated
```

#### First fit implementation

```
Enter number of processes:3
Enter size of each process:
P[1]:12
P[2]:10
P[3]:56
Enter number of blocks:3
Enter size of each block:
B[1]:8
B[2]:10
B[3]:12
Block Size Process Size  Status
B[1]   8    0       0  Not Allocated
B[2]  10    2      10  Allocated
B[3]  12    1      12  Allocated

```

#### Interprocess Communication implementation

```
Key of shared memory is 32780
Process is attached at 0x7f2dc8269000
search 4
Value shared is search 4
```
```
Key of shared memory is 32780
Process is attached at 0x7f4fa4ef5000
Value read from shared is search 4
```

#### Worst fit implementation

```
Enter number of processes:4
Enter size of each process:
P[1]:212
P[2]:417
P[3]:112
P[4]:426
Enter number of blocks:5
Enter size of each block:
B[1]:100
B[2]:500
B[3]:200
B[4]:300
B[5]:600
Block   Size    Process Size    Status
B[1]    100     0       0       Not Allocated
B[2]    500     2       417     Allocated
B[3]    200     0       0       Not Allocated
B[4]    300     3       112     Allocated
B[5]    600     1       212     Allocated
```

#### Banker's algorithm implementation

```
Enter number of processes:5
Enter number of resources:3
Enter max.number of resources required for each process:
P[1]:
        R[1]:7
        R[2]:5
        R[3]:3
P[2]:
        R[1]:3
        R[2]:2
        R[3]:2
P[3]:
        R[1]:9
        R[2]:0
        R[3]:2
P[4]:
        R[1]:2
        R[2]:2
        R[3]:2
P[5]:
        R[1]:4
        R[2]:3
        R[3]:3
Enter number of  resources allocated for each process:
P[1]:
        R[1]:0
        R[2]:1
        R[3]:0
P[2]:
        R[1]:2
        R[2]:0
        R[3]:0
P[3]:
        R[1]:3
        R[2]:0
        R[3]:2
P[4]:
        R[1]:2
        R[2]:1
        R[3]:1
P[5]:
        R[1]:0
        R[2]:0
        R[3]:2
Enter number of  available resources:
3
3
2
P[2]    P[4]    P[1]    P[3]    P[5]
Safe
```
```
Enter number of processes:5
Enter number of resources:3
Enter max.number of resources required for each process:
P[1]:
        R[1]:7
        R[2]:5
        R[3]:3
P[2]:
        R[1]:3
        R[2]:2
        R[3]:2
P[3]:
        R[1]:9
        R[2]:0
        R[3]:2
P[4]:
        R[1]:2
        R[2]:2
        R[3]:2
P[5]:
        R[1]:4
        R[2]:3
        R[3]:3
Enter number of  resources allocated for each process:
P[1]:
        R[1]:0
        R[2]:1
        R[3]:0
P[2]:
        R[1]:2
        R[2]:0
        R[3]:0
P[3]:
        R[1]:3
        R[2]:0
        R[3]:2
P[4]:
        R[1]:2
        R[2]:1
        R[3]:1
P[5]:
        R[1]:3
        R[2]:3
        R[3]:2
Enter number of  available resources:
0
0
2

 Not safe
```

#### SJF implementation

```
Enter no.of processes:4
enter at and bt of each process:
ID:2
A.T:2
B.T:1
ID:3
A.T:3
B.T:3
ID:1
A.T:1
B.T:8
ID:0
A.T:0
B.T:6
Process A.T     B.T     T.A.T   W.T
0       0       6       6       0
2       2       1       5       4
3       3       3       7       4
1       1       8       17      9
Avg.TAT:8.750000
Avg.WT:4.250000
```

#### Priority Scheduling

```
Enter no.of processes:5
enter at and bt of each process:
ID:1
A.T:1
B.T:8
priority:2
ID:0
A.T:0
B.T:6
priority:5
ID:4
A.T:4
B.T:4
priority:4
ID:3
A.T:3
B.T:3
priority:3
ID:2
A.T:2
B.T:1
priority:1
Process A.T     B.T     P.R     T.A.T   W.T
0       0       6       5       6       0
2       2       1       1       5       4
1       1       8       2       14      6
3       3       3       3       15      12
4       4       4       4       18      14
Avg.TAT:11.600000
Avg.WT:7.200000
```

#### FIFO Page Replacement Algorithm

```
Enter number of pages:20
Enter page numbers:
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
Enter number of frames:3
7       7 -1 -1
0       7 0 -1
1       7 0 1
2       2 0 1
0
3       2 3 1
0       2 3 0
4       4 3 0
2       4 2 0
3       4 2 3
0       0 2 3
3
2
1       0 1 3
2       0 1 2
0
1
7       7 1 2
0       7 0 2
1       7 0 1
Page Fault is 15
```

#### LRU Page Replacement Algorithm

```
Enter number of pages:20
Enter page numbers:
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
Enter number of frames:3
7       7 -1 -1
0       7 0 -1
1       7 0 1
2       2 0 1
0
3       2 0 3
0
4       4 0 3
2       4 0 2
3       4 3 2
0       0 3 2
3
2
1       1 3 2
2
0       1 0 2
1
7       1 0 7
0
1
Page Fault is 12
```

#### LFU Page Replacement Algorithm

```
Enter number of pages:15
Enter page numbers:
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2
Enter number of frames:3
7       7 -1 -1
0       7 0 -1
1       7 0 1
2       2 0 1
0
3       2 0 3
0
4       4 0 3
2       4 0 2
3       3 0 2
0
3
2
1       3 0 1
2       3 0 2
Page Fault is 10
```

#### FCFS Disk scheduling 

```
Enter no.of request:8
Enter request sequence:
95 180 34 119 11 123 62 64
Enter initial head position:50
Total head movement:644
```

#### SCAN Disk scheduling 

```
Enter no.of request:5
Enter request sequence:
20 89 130 45 180
Enter initial head position:100
Enter total disk size:200
Enter head movement direction(low:0,high:1):0
Total head movement:280
```

#### C-SCAN Disk scheduling 

```
Enter no.of request:5
Enter request sequence:
23 89 132 42 187
Enter initial head position:100
Enter total disk size:200
Enter head movement direction(low:0,high:1):0
Total head movement:366
```
