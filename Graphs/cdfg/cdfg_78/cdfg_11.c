#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 309910052
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p)
{
  int v_21;
  long long v_19;
  int v_16;
  char v_14;
  unsigned int v_12;
  char v_10;
  signed char v_8;
  unsigned short v_6;
  unsigned long long v_4;
  unsigned char v;
  long result;
  v_21 = -667181438;
  v_19 = 37781LL;
  v_14 = (char)p;
  v_12 = 4294953825U;
  v_10 = (char)101;
  v_8 = (signed char)107;
  v_6 = (unsigned short)p;
  v_4 = 18446744073106783938ULL;
  v = (unsigned char)p;
  result = 2367L;
  while (5698ULL <= 86ULL % (~ v_4 + 600ULL)) {
    v_21 = (double)v_21 * ((double)v_19 * -951292163.811);
    v_4 = (unsigned long long)p;
    v_8 = (signed char)(! v_10);
    v_4 = (unsigned long long)v_14 % ((v_4 - 64181ULL) + 727ULL);
  }
  while_0_break: ;
  while (0. <= - (-267.218966753 / ((double)v_4 + 1000.) + (double)((int)v_6 - (int)v_8))) {
    v_16 = (int)(- ((float)((int)v_14 + p) / ((float)p * 2.65711410735e+38f + 365.f)));
    v_8 = (signed char)((-43L % (long)((int)v_8 * (int)v_10 + 681)) / (long)(
                        ! ((int)v_14 / (v_16 + 421)) + 793));
    v_6 = (unsigned short)((unsigned long)((long)((int)v * 44) * result) * (unsigned long)v_12);
  }
  while_0_break_0: ;
  return result;
}


