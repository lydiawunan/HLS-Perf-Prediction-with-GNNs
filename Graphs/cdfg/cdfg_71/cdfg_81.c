#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 158718764
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p, float p_4[3][3], short p_7, short p_11,
        signed char p_15[5])
{
  long v_29;
  long long v_27;
  long v_25;
  short v_23;
  signed char v_21;
  long long v_19;
  long v_17;
  int v_13;
  long long v_9;
  unsigned char v;
  int result;
  v_27 = (long long)p;
  v_25 = 59271L;
  v_23 = p_7;
  v_21 = p_15[4];
  v_17 = -796650714L;
  result = -37864;
  if (! (! result + -101) != -1001655227) {
    v_17 = (long)((! p / ((unsigned int)v_23 / (p + 367U) + 58U)) % (
                  (unsigned int)((double)p_7 / (881.695817687 / ((double)v_25 + 323.) + 610.)) + 665U));
    v_19 = (long long)((long)v_21 - -58969L);
    v_13 = (int)(5653LL + ((long long)((int)((short)p_4[1][2]) - (int)p_11) - v_19));
  }
  else {
    v_29 = (long)p_4[1][2];
    v_13 = (int)((unsigned long long)(! (- v_29)) * (unsigned long long)(
                 -10817 | (int)p_11));
    result = (int)((float)((long long)(- p_7) % (v_27 + 1004LL)) - p_4[0][1]);
  }
  if (((unsigned long long)v_13 ^ 0 % (unsigned long long)((int)p_15[1] + 214)) > (unsigned long long)v_17) 
    result = (int)(15989U ^ p);
  else {
    v_9 = (long long)p_11;
    v = (unsigned char)p_4[2][0];
    result = (int)((long long)((int)((unsigned char)p_4[1][2]) * (int)v + 
                               (int)v / (result + 116)) * (((long long)p_7 % (
                                                            v_9 + 260LL)) % (long long)(
                                                           p + 290U)));
  }
  return result;
}


