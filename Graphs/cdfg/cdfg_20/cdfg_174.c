#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 896114718
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned short p_5, unsigned long p_11,
         char p_13)
{
  long long v_19;
  unsigned short v_17;
  short v_15;
  short v_9;
  unsigned long long v_7;
  signed char v;
  long result;
  v_19 = 45038LL;
  v_17 = (unsigned short)39784;
  v_15 = (short)11319;
  v = (signed char)-103;
  result = 186930412L;
  if (((v_19 - (long long)v_17) % 864LL) / (long long)(p_11 + 285UL) <= (long long)v) {
    v_7 = (unsigned long long)v_15;
    result = (long)(! p_13);
    v_9 = (short)(18446744073108195647ULL + ~ (p / (unsigned long long)(
                                               p_11 + 972UL)));
  }
  else {
    v_9 = (short)(! ((int)(~ p_5) ^ ((int)v_15 - 187)));
    v_7 = (unsigned long long)((long long)((unsigned long)result + p_11 / (unsigned long)(
                                                                   (int)v_9 + 984)) + v_19);
    v_9 = (short)(- v_17);
  }
  while (((p | (unsigned long long)v) >> 44UL) + (unsigned long long)(
         (long)p_5 * result + 190L) < 22ULL) {
    result = (int)v_9 + (int)((short)((double)v_7 + 3583178925.72));
    v_9 = (short)((int)p_5 * (int)p_5 - 116);
    v_7 = ~ p | 18446744073170524152ULL;
    v = (signed char)(~ 12908UL);
  }
  while_0_break: ;
  return result;
}


