#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 568901133
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, int p_5, unsigned int p_11, char p_13, char p_15)
{
  long v_21;
  unsigned char v_19;
  unsigned short v_17;
  long v_9;
  unsigned long long v_7;
  unsigned char v;
  unsigned char result;
  v_21 = (long)p_5;
  v_19 = (unsigned char)155;
  v_17 = (unsigned short)64075;
  v_9 = (long)p_15;
  v_7 = 18446744073709534720ULL;
  v = (unsigned char)p_13;
  result = (unsigned char)p_13;
  while ((unsigned long long)(! (((unsigned int)result & p_11) + (unsigned int)(~ v_19))) == 
         (unsigned long long)(! p_5) * (250847533ULL & (v_7 - (unsigned long long)v_17))) {
    v_19 = (unsigned long long)v_21 ^ 211611846ULL;
    v_21 = (long)(- ((int)p * 158557026 ^ (int)v * (int)v_17));
    v_9 = (long)(! ((int)(~ v_17) % (((int)p_15 >> (p_11 & 7U)) + 458)));
    v_17 = (unsigned short)(((long long)(p * 540132532.) * (-661248825LL * (long long)p)) / (long long)(
                            ! (~ v_21) + 635L));
  }
  while_0_break: ;
  if (~ (((unsigned long long)v_17 - v_7) << ((int)((char)p) % ((int)p_13 + 79) & 63)) < 3965669ULL) {
    v_7 = (unsigned long long)p_13;
    v = (unsigned char)(- (~ v_7 * (unsigned long long)((unsigned long)v_9 * (unsigned long)p_11)));
    result = (unsigned char)(- ((double)v / ((p - (double)p_5) + 582.)));
  }
  else {
    result = (unsigned char)p_13;
    result = (unsigned char)(- (~ ((int)result - (int)p_13)));
  }
  return result;
}


