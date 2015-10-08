#ifndef TEST_H
#define TEST_H

const double first[20][20] = {
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91},
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91},
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91},
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91}
};

const double second[20][20] = {
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91},
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91},
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91},
	{68,   35,   97,   51,   90,   13,   34,   39,   26,   65,   78,   32,   92,   99,   24,    2,    6,   89,   87,   47},
	{94,   20,   22,   81,   40,   98,   61,   14,   82,   62,   86,    5,   46,   76,   53,   48,   96,   16,   29,   17},
    {8,   49,   38,   12,   59,   93,   69,    1,   37,   50,   18,   80,   36,   66,   28,   63,   73,   54,    4,   72},
    {44,   43,   10,   57,   15,   77,   45,   23,   79,   88,   31,   60,   30,   42,   41,   33,   58,   64,   83,   70},
    {7,   56,   25,   21,   27,   84,   11,    3,   19,  100,   95,   75,   71,   52,    9,   85,   55,   74,   67,   91}
};
#endif