#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 757847415
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, float p_7, unsigned short p_9[3], double p_15,
                unsigned short p_21)
{
  int v_31;
  unsigned int v_29;
  unsigned short v_27;
  unsigned long long v_25;
  unsigned long v_23;
  int v_19;
  unsigned char v_17;
  unsigned int v_13;
  float v_11;
  unsigned long long v_5;
  signed char v;
  signed char result;
  v_31 = (int)p_15;
  v_29 = (unsigned int)p_7;
  v_27 = (unsigned short)p_15;
  v_25 = (unsigned long long)p_15;
  v_23 = 18612UL;
  v_19 = -37511;
  v_17 = (unsigned char)200;
  v_13 = (unsigned int)p_7;
  v_11 = p_7;
  result = (signed char)99;
  if (- ((986920728. + p_15) / ((double)(- v_17) + 665.)) >= (double)(- (
      (unsigned long long)(p_15 + (double)p_7) + (v_25 - (unsigned long long)p_15)))) {
    v = (signed char)((unsigned long long)(! (! v_13)) % ((v_25 - (unsigned long long)v_27) + 631ULL));
    v_23 = (unsigned long)(- p_15);
    v_13 = (unsigned int)v_25;
  }
  else {
    v_5 = (unsigned long long)(v_31 / ((int)p_21 / ((54459 & (int)p_7) + 655) + 335));
    v = (signed char)((unsigned int)(! ((int)((signed char)-870.311756917) * (int)result)) * (
                      (unsigned int)p_15 / (v_29 + 146U)));
    v_19 = (int)((unsigned long long)((unsigned int)((int)p_21 - 117) - (
                                      v_29 - (unsigned int)v_11)) ^ v_5);
  }
  if ((unsigned long)v_19 == (unsigned long)(- (! v)) + ((unsigned long)p_21 + v_23) / 4294945563UL) {
    v = (signed char)((long long)(- (- v_11)) / (! (691646578LL - (long long)v_13) + 226LL));
    v_5 = (unsigned long long)(- (75595112UL ^ (unsigned long)((int)((unsigned short)p_7) % (
                                                               (int)p_9[0] + 522))));
    result = (signed char)((unsigned long long)v * (18446744073531984489ULL / (
                                                    (unsigned long long)p * v_5 + 1014ULL)));
  }
  else {
    v_17 = (unsigned char)157;
    result = (signed char)((long)(-936.181032255 * (double)p_7) % (((long)(
                                                                    p_15 / (
                                                                    (double)v_17 + 45.)) & -172503407L) + 337L));
  }
  return result;
}


