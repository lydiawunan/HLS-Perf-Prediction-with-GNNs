#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 729217655
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, signed char p_11, int p_23)
{
  unsigned long long v_21;
  unsigned long long v_19;
  char v_17;
  unsigned char v_15;
  unsigned short v_13;
  long v_9;
  unsigned short v_7;
  unsigned char v_4;
  short v;
  double result;
  v_21 = (unsigned long long)p_23;
  v_19 = (unsigned long long)p_23;
  v_17 = (char)p;
  v_15 = (unsigned char)p;
  v_13 = (unsigned short)p_11;
  v_9 = 64767L;
  v_7 = (unsigned short)47646;
  result = 9043330021.63;
  if ((double)(! ((unsigned long)p_11 - 166744539UL)) == (- result - (double)(- p_23)) - 0.) {
    v_17 = (char)v_19;
    v_4 = (unsigned char)v_9;
    v_13 = (unsigned short)((int)((signed char)-439.777923584f) % ((int)p + 464) - (int)(- v_17));
  }
  else {
    v_7 = (unsigned short)((unsigned long long)result * ((v_21 ^ 18446744073205775262ULL) * (unsigned long long)(
                                                         (double)p_23 - -2.33118482872e+38)));
    v_4 = (unsigned char)((double)(0 % (long)((int)(~ v_17) + 53)) - -12162015756.4);
    v_15 = (unsigned char)v_13;
  }
  if ((unsigned int)(- ((int)p_11 * (-59004 % ((int)v_13 + 123)))) > 
      3521237838U / (unsigned int)((int)(- (~ v_15)) + 639)) {
    v = (short)((long)(((int)v_4 / ((int)p + 427)) * ((int)v_7 / -12770)) & ! (! v_9));
    result = (double)-419479561LL;
    result = - result + (double)((long)v & -14485L);
  }
  else result = (double)(unsigned char)50;
  return result;
}


