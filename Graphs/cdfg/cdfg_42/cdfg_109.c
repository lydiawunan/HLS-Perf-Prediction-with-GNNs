#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 452842094
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p, int p_5[5][3][1], unsigned short p_9,
                  short p_13, unsigned char p_15)
{
  unsigned short v_29;
  unsigned int v_27;
  double v_25;
  long long v_23;
  float v_21;
  long v_19;
  unsigned int v_17;
  signed char v_11;
  unsigned short v_7;
  short v;
  unsigned long result;
  v_29 = p_9;
  v_27 = (unsigned int)p_5[3][2][0];
  v_25 = -1.310589718e+37;
  v_23 = -40964LL;
  v_21 = -318.432128906f;
  v_19 = 510495944L;
  v_11 = (signed char)p_5[1][0][0];
  result = 3854922758UL;
  if ((unsigned int)(5602 - ((int)(! p_15) + p_5[1][1][0])) >= ((unsigned int)(
                                                                (double)v_23 / (
                                                                v_25 + 355.)) - 
                                                                (unsigned int)p_15 / (
                                                                v_27 + 524U)) - (unsigned int)(
                                                               (int)(! v_29) - - p_5[0][0][0])) {
    v_17 = (unsigned int)((int)p_13 % ((int)p_15 + 1008));
    v_11 = (signed char)((v_19 - (long)(- p_9)) + (long)((int)p_13 / (
                                                         (int)((short)(- v_21)) + 171)));
    v_7 = (unsigned short)33322;
  }
  else {
    v_7 = (unsigned short)(- (! (- result)));
    v_17 = (unsigned int)((int)p_9 % ((((int)v_11 ^ -52) << ((int)(! p_9) & 31)) + 535));
    v_11 = (signed char)(~ (~ ((unsigned long long)result % 450422501ULL)));
  }
  if ((unsigned int)v_7 == ((p + 4294967219U) - (unsigned int)((int)p_15 * p_5[3][1][0])) * ! (
                           4294967278U % (v_17 + 709U))) {
    v_7 = (unsigned short)((unsigned int)(~ ((int)p_13 ^ (int)p_15)) ^ ! (! p));
    v = (short)(- v_11);
    result = (unsigned long)(((unsigned long long)((unsigned int)v % (
                                                   p + 606U)) - 55547ULL) % (unsigned long long)(
                             (p_5[0][1][0] % ((int)v_7 + 521) - (int)p_9) + 1004));
  }
  else result = (unsigned long)(- (- (- 41.7355041504f)));
  return result;
}


