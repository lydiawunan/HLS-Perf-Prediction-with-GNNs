#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 767727682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(char p, unsigned char p_11, short p_21)
{
  unsigned short v_19;
  long v_17;
  unsigned char v_15;
  long long v_13;
  unsigned long v_9;
  int v_7;
  unsigned int v_5;
  double v;
  int result;
  v_19 = (unsigned short)6029;
  v_17 = -6460L;
  v_15 = (unsigned char)176;
  v_9 = 721590145UL;
  v_7 = 445523370;
  v_5 = (unsigned int)p_11;
  v = 2.71561403436e+38;
  result = (int)p;
  if ((unsigned int)((float)((int)p * result) + ((float)p_21 - -4.86251147016e+37f)) / (
      (3729386983U % (v_5 + 530U)) % (unsigned int)((int)p * (int)v_15 + 978) + 64U) != (unsigned int)(
      (int)p_11 / ((int)(! (~ v_15)) + 170))) {
    v_7 = (int)(~ (unsigned char)223);
    v_13 = (long long)((unsigned long)v_7 * ((unsigned long)v_17 * (unsigned long)(
                                             (unsigned int)v_7 % (v_5 + 43U))));
    result = (int)(((unsigned long)p % (v_9 + 644UL) << 21ULL) * (4294910246UL * (
                                                                  575882993UL / (unsigned long)(
                                                                  (int)v_15 + 130))));
  }
  else {
    v = (double)(! ((long)v_15 + -28161L) % (long)((int)(- p_21) % ((int)p + 531) + 201));
    v_13 = (long long)((double)(~ v_7 - result / ((int)v_19 + 97)) - 
                       (double)p_11 * -1.41389765349e+43);
    result = (int)(- (! (! -731456559LL)));
  }
  while (4032348455U == (unsigned int)((~ result ^ (int)p / 61) * 6816)) {
    v_5 = (double)v_7 + (v - 50252.);
    v = (double)(! (! v_13));
    v_9 = ~ ((unsigned long)v_5 - (unsigned long)(-4116L / (long)((int)p_11 + 252)));
    result = (int)(((long long)((unsigned long)1.84039230877e+38 / (v_9 + 100UL)) % 19696LL) * 274143345LL);
  }
  while_0_break: ;
  return result;
}


