//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 222509837
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, char p_9[3][5][1], float p_13,
              unsigned short p_15)
{
  char v_11;
  signed char v_7;
  unsigned long v_5;
  signed char v;
  long long result;
  v_11 = p_9[2][2][0];
  v = (signed char)-67;
  v_7 = (signed char)((unsigned long long)((unsigned int)(~ ((int)v_11 * 85))) + 
                      59777ULL * (unsigned long long)p_15);
  v_5 = (unsigned long)(((unsigned long long)((int)p_9[0][4][0] * 94) - (
                         (unsigned long long)(~ v_11) + 21542ULL)) - (unsigned long long)(
                        -146976361LL - (long long)((unsigned long)(p_13 - 1.42869932144e+38f) % (
                                                   (unsigned long)v % 736868137UL + 233UL))));
  v = (signed char)(! (! (v_5 - (unsigned long)v_7) / (unsigned long)(
                       ! ((int)((char)1.49864884304e+38) << ((int)p_9[2][0][0] & 7)) + 124)));
  result = (long long)((unsigned int)v - p);
  return result;
}


