#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 858817522
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[3][4], double p_9, signed char p_11, unsigned char p_15,
         unsigned int p_19)
{
  long long v_25;
  double v_23;
  double v_21;
  signed char v_17;
  unsigned long long v_13;
  short v_7;
  unsigned char v_5;
  int v;
  char result;
  v_23 = (double)p[0][2];
  v_21 = -503.167234503;
  v_17 = (signed char)p[1][1];
  v_13 = 18446744073276284850ULL;
  if (! (~ ((unsigned long long)p_11 * v_13)) <= (unsigned long long)(
      (unsigned int)((int)p_15 & (int)((unsigned char)(38. / (p_9 + 985.)))) / (
      p_19 + 219U))) {
    v_21 = (double)p[0][2];
    v_7 = (short)((unsigned int)v_21 % (((unsigned int)-1.40255185156e+38 - p_19) + 358U) - 9U);
    v_13 = (unsigned long long)((((int)p_15 + (int)v_17) >> (((int)v_7 - 190) & 31)) >> (
                                - ((unsigned long long)p_19 - v_13) & 31ULL));
  }
  else {
    v_25 = (long long)(p_19 + (unsigned int)p[2][2]);
    result = (char)-46;
    v_7 = (short)(((int)result + (int)((signed char)v_23) * (int)p_11) / (
                  (int)(((double)v_25 * v_21) / ((double)p_15 + 78.)) + 224));
  }
  if ((unsigned long long)p_9 >= - (((unsigned long long)p_11 & v_13) << 16ULL)) {
    v_5 = (unsigned char)v_7;
    v = (int)v_5;
    result = (char)((p[0][3] + (-26831 + v)) / 459);
  }
  else result = (char)-1.30810987148e+38;
  return result;
}


