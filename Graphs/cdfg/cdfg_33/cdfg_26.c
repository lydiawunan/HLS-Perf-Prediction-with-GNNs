#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1034417886
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p, unsigned short p_7, char p_11,
                   unsigned long p_13[2], int p_17)
{
  unsigned char v_21;
  unsigned short v_19;
  char v_15;
  unsigned long long v_9;
  long long v_4;
  unsigned long long v;
  unsigned short result;
  v_19 = (unsigned short)27907;
  v_15 = (char)p_17;
  v_9 = (unsigned long long)p_11;
  v = (unsigned long long)p_13[1];
  result = (unsigned short)p;
  v_21 = (unsigned char)(~ v % (unsigned long long)(- p_17 + 842));
  if ((int)v_15 >> (-967690945L / (long)(((int)v_19 ^ 9291) + 41) & 7L) <= ! (- (
      (int)v_21 / ((int)p_7 + 533)))) {
    v_4 = (long long)(! ((unsigned long long)((int)p_11 / 54247) / ((
                                                                    (unsigned long long)p_13[1] ^ v) + 773ULL)));
    result = (unsigned short)(~ (((unsigned long long)result + v_9) * (unsigned long long)(
                                 (int)((unsigned char)578.947513494) & (int)p)));
    result = (unsigned short)(((unsigned long long)(! result) * (v - (unsigned long long)v_4)) % (unsigned long long)(
                              (int)p % (((int)p_7 + -27932) + 869) + 414));
  }
  else {
    v_15 = (char)(4294963832UL * (unsigned long)p_17);
    result = (unsigned short)(~ v_15);
  }
  return result;
}


