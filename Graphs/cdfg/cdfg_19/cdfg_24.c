#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 706829131
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, double p_13, long p_17, unsigned short p_19,
                long long p_23)
{
  char v_21;
  double v_15;
  long long v_11;
  double v_9;
  unsigned char v_7;
  unsigned int v_5;
  int v;
  signed char result;
  v_21 = (char)p_17;
  v_15 = (double)p_17;
  v_11 = -112238748LL;
  v_9 = 795.981240609;
  v_5 = 548143046U;
  v = -576296401;
  v_7 = (unsigned char)(20476 - (~ v & 139));
  if ((((long long)((int)v_21 % ((int)((char)v_15) + 927)) - (v_11 + (long long)v)) & (long long)(- (! v_5))) == 
      (long long)(-56871L << ((p_23 - (long long)p_19) & 31LL)) % (p_23 / (long long)(
                                                                   (int)p_19 + 847) + 834LL)) {
    v_5 = (unsigned int)((int)v_7 >> (((long long)(v_9 + 3379660136.) - 
                                       699955352LL % (v_11 + 838LL)) & 7LL));
    v = (int)v_5;
    result = (signed char)(- ((22519 ^ v) >> (p & 31)));
  }
  else {
    v_15 = (double)p_19;
    v_7 = (unsigned char)24;
    result = (signed char)((double)((int)((unsigned char)(p_13 * v_15)) - (int)(- v_7)) / (
                           - (p_13 * (double)p_17) + 932.));
  }
  return result;
}


