#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 872232046
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, signed char p_7, unsigned short p_9,
                  unsigned long long p_11[4][4], unsigned int p_17[2][3])
{
  signed char v_29;
  unsigned char v_27;
  signed char v_25;
  short v_23;
  signed char v_21;
  double v_19;
  short v_15;
  long v_13;
  char v_5;
  unsigned char v;
  unsigned char result;
  v_29 = (signed char)-90;
  v_27 = (unsigned char)p_17[0][2];
  v_25 = p_7;
  v_23 = (short)-16881;
  v_21 = (signed char)p_9;
  v_19 = (double)p;
  v_15 = (short)13765;
  v_13 = 286816966L;
  if (38175ULL + (346100943ULL << 27) * (unsigned long long)(~ p_17[0][2]) == (unsigned long long)(
      ((long long)v_25 * -1031809155LL) * (long long)(v_19 - -305002778.) ^ (long long)v_13)) {
    v_19 = (double)((unsigned int)(- (30762. / (v_19 + 307.))) * ((unsigned int)(
                                                                  -1 + (int)v_21) + - p_17[0][2]));
    v_13 = (long)(! ((unsigned int)p_7 + p_17[1][0]) / (unsigned int)(
                  (int)p_9 + 432));
    v_15 = (short)p_7;
  }
  else {
    v_25 = (signed char)(~ (! ((int)p_7 % ((int)v_29 + 436))));
    v_19 = (double)(((unsigned int)v_19 * p_17[0][2] + (unsigned int)(
                     3.35116214088e+38f - (float)v_27)) + (unsigned int)((int)(! v_23)));
    v_13 = ~ (-23628L % (long)((int)v_23 + 132)) + (long)((int)(! v_25) * p);
  }
  if ((unsigned long long)p_7 + ((unsigned long long)p_9 / (p_11[0][3] + 1013ULL) + (unsigned long long)v_13) != (unsigned long long)(
      (unsigned int)((int)-8391224320.f - (int)v_15 % ((int)p_9 + 868)) + ~ (
      p_17[1][2] + (unsigned int)v_19))) {
    v = (unsigned char)(- p);
    result = (unsigned char)((double)p - - ((double)v + 655.429039758));
  }
  else {
    v_5 = (char)p;
    v = (unsigned char)499.127904674;
    result = (unsigned char)((0 - (int)v_5) + (161 - (int)v));
  }
  return result;
}


