#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 626426475
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p, long p_9, long p_11, unsigned char p_13,
         unsigned short p_15)
{
  long long v_25;
  unsigned long long v_23;
  unsigned long v_21;
  long v_19;
  unsigned short v_17;
  long long v_7;
  int v_5;
  unsigned long long v;
  char result;
  v_25 = -582848130LL;
  v_23 = (unsigned long long)p_15;
  v_21 = (unsigned long)p_15;
  v_19 = -785880143L;
  v_17 = (unsigned short)31612;
  v_7 = (long long)p_15;
  v_5 = -32;
  v = 885721116ULL;
  while ((~ ((long)p_15 * p_9) ^ (long)(! ((int)p_13 << ((int)v_17 & 7)))) < (long)(! (
         (-26106 << (p_9 & 15L)) - ((int)p << ((int)((signed char)2.27906946345e+38f) & 7))))) {
    v_7 = v_23 & (unsigned long long)(v_21 % (unsigned long)((v_19 + 612292438L) + 931L));
    v_23 = 161740194ULL;
    v_21 = (unsigned long)(- (((long)v_5 - -56808L) >> (- v_25 & 31LL)));
    v_17 = (unsigned short)((unsigned long long)((int)p) - ((unsigned long long)(
                                                            p_9 * (long)p_13) ^ 14967124603840ULL));
  }
  while_0_break: ;
  if ((float)(18446744073709525656ULL % (v + 1014ULL)) >= (((float)p_9 - -900.179321289f) + 776272960.f) - (
                                                          (float)(- p_11) - 1.83730560154e+38f)) 
    result = (char)p;
  else {
    v_5 = (int)(v | (unsigned long long)p);
    result = (char)(! ((v % 34ULL) / (unsigned long long)((long long)v_5 / (
                                                          v_7 + 644LL) + 827LL)));
    result = (char)((((unsigned long)result | 151270423UL) + (unsigned long)(
                     (int)p - (int)p)) / (unsigned long)((4921 + (int)(! result)) + 887));
  }
  return result;
}


