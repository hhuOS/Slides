Util::Array<uint32_t> a = {1, 2};

Util::Array<uint32_t> b = a;

a[1] = 3;

printf("a[0]=%d , a[1]=%d\n", a[0], a[1]);

printf("b[0]=%d , b[1]=%d\n", b[0], b[1]);
