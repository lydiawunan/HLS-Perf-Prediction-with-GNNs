#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 24666441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, short p_4, char p_9, long p_17)
{
  int v_23;
  unsigned long long v_21;
  unsigned char v_19;
  unsigned char v_15;
  unsigned char v_13;
  unsigned short v_11;
  signed char v_7;
  short v;
  unsigned short result;
  v_23 = (int)p;
  v_21 = 44832ULL;
  v_19 = (unsigned char)p;
  v_15 = (unsigned char)12;
  v_13 = (unsigned char)p_17;
  v_11 = (unsigned short)p_4;
  v_7 = (signed char)93;
  v = (short)-24881;
  result = (unsigned short)p_17;
  if ((unsigned int)p == (4986U / (unsigned int)((int)v_19 + 474) + (unsigned int)v_13) % (unsigned int)(
                         ((int)((short)-2.01812864344e+38) + (int)(! p_4)) + 101)) {
    v_13 = (unsigned char)(! (- (-46204LL - (long long)v_7)));
    result = (unsigned short)(~ v_15);
    v = (short)((2.75574259747e+38f / ((float)((int)p_9 % ((int)v_15 + 303)) + 189.f)) * (float)(
                -48L * ((long)v_7 + -5336L)));
  }
  else {
    v_19 = (unsigned char)(! v_23);
    v_7 = (signed char)((unsigned long long)(~ (-1021682543LL * (long long)v_19)) / (
                        (unsigned long long)((int)((unsigned short)5014847488.f) / (
                                             (int)v_11 + 799)) * (v_21 / (unsigned long long)(
                                                                  (int)result + 660)) + 740ULL));
    result = (unsigned short)((long)p_4 - ~ p_17);
  }
  while ((int)v < (int)v_7 + (int)p_9) {
    v = (unsigned int)v_13 & ((unsigned int)v_11 - 4294946906U);
    result = (unsigned short)(-(char)51);
    v_13 = (unsigned char)(-15. + p);
    v_7 = (signed char)((int)2.87206371476e+38 ^ (-942480858 + ((int)((char)-493.746440687) + -113)));
  }
  while_0_break: ;
  return result;
}


