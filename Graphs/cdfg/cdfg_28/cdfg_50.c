#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 752003162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, unsigned char p_5, signed char p_17[1][4])
{
  float v_23;
  unsigned short v_21;
  unsigned long v_19;
  int v_15;
  unsigned char v_13;
  unsigned int v_11;
  float v_9;
  int v_7;
  char v;
  long result;
  v_23 = 2.39015906039e+38f;
  v_21 = (unsigned short)32588;
  v_19 = 4294953647UL;
  v_13 = (unsigned char)p;
  v_11 = 4294919708U;
  v_9 = 657.027160645f;
  v_7 = (int)p;
  result = -58931L;
  while (! ((unsigned long)((int)((char)7228995584.f) + 53) % (v_19 % (unsigned long)(
                                                               (int)p_17[0][2] + 250) + 945UL)) >= (unsigned long)(! (
         ((int)p << (v_7 & 15)) / ((int)(- v_9) + 604)))) {
    v_7 = -24178;
    v_13 = (unsigned char)((int)v_21 - (int)((unsigned short)(v_23 * (float)p_17[0][0] - (float)p_5)));
    v_9 = - (- (- 2171770368.f));
  }
  while_0_break: ;
  if ((unsigned long long)(908.315893854 * (double)(~ (- p_17[0][2]))) >= 
      (unsigned long long)((int)(- p_5) - (int)p_17[0][2]) - 18446744073709544715ULL / (
                                                             (unsigned long long)(
                                                             (double)v_7 + -1.05044566826e+38) + 244ULL)) {
    v_7 = (int)((long)(- p_5) / ((long)p_5 / ((long)p_5 * result + 395L) + 784L));
    v = (char)((unsigned int)((float)p * v_9) % (v_11 % 985U + 836U) - (unsigned int)v_13);
    result = (long)(((long long)p * -61178LL + (long long)((int)v * (int)((char)-5.14967743123e+37f))) / (long long)(
                    (int)p_5 / ((int)p_5 / (v_7 + 41) + 574) + 823));
  }
  else {
    v_15 = -252301868;
    v = (char)v_15;
    result = (long)((long long)(((int)p - 723508711) / -39358) - ((418349542LL & (long long)v) - -12LL));
  }
  return result;
}


