#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181226733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, signed char p_5, char p_7, unsigned short p_9,
                       long long p_11)
{
  unsigned long long v_23;
  long long v_21;
  int v_19;
  signed char v_17;
  unsigned short v_15;
  unsigned int v_13;
  unsigned short v;
  unsigned long long result;
  v_23 = (unsigned long long)p_5;
  v_21 = 44910LL;
  v_19 = 58874;
  v_17 = (signed char)-27;
  v_15 = (unsigned short)60610;
  v = (unsigned short)43292;
  result = (unsigned long long)p_7;
  while ((int)v_15 - (-732665906 >> (((int)v_17 - v_19) & 31)) != ((int)((signed char)(
                                                                   (float)(! v_15) * (
                                                                   7.29375173991e+37f + (float)p))) ^ (int)p_5)) {
    v_21 /= 4294942962LL;
    v_19 = (int)(- (~ p_11 ^ (long long)((double)p_5 / 2.06851376787e+38)));
    v = (unsigned short)((long long)v_19 % ((41085LL >> (v_23 & 63ULL)) + 301LL));
    v_19 = (int)(~ (~ p_11 * (long long)(- v_17)));
  }
  while_0_break: ;
  if ((unsigned long long)p_11 / (18446744073709530623ULL / (unsigned long long)(
                                  (int)p_7 / 24 + 145) + 554ULL) > (unsigned long long)(
      (-774678660 / ((int)v + 185)) * 65160 - (int)v)) {
    v_13 = (unsigned int)((long)p_5 & 0 / (long)((int)v % ((int)v + 506) + 290));
    v = (unsigned short)((long long)p_7 - (- p_11 << (v_13 & 63U)));
    result = (unsigned long long)((46098 - p) * ((int)v * (int)p_5)) % (
             ((unsigned long long)((int)p_5 + (int)p_7) + (unsigned long long)p_9 % (
                                                          result + 607ULL)) + 396ULL);
  }
  else result = (unsigned long long)p_5;
  return result;
}


