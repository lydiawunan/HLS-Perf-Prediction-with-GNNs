#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 76751622
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, unsigned long p_5, short p_13, char p_15, long p_17)
{
  double v_27;
  long long v_25;
  unsigned int v_23;
  unsigned char v_21;
  char v_19;
  unsigned char v_11;
  double v_9;
  unsigned long v_7;
  unsigned short v;
  unsigned char result;
  v_27 = -2.85975129471e+38;
  v_25 = -74623615LL;
  v_23 = (unsigned int)p_13;
  v_21 = (unsigned char)54;
  v_11 = (unsigned char)250;
  v_9 = -5.09174871966e+37;
  v_7 = (unsigned long)p_17;
  v = (unsigned short)38335;
  result = (unsigned char)131;
  while (258324504LL != (long long)(((p_5 - 4294967212UL) | (unsigned long)result * 3566359759UL) - 123982895UL)) {
    v_23 = v_27 / ((double)(v_25 & 4294946925LL) + 955.);
    result = (unsigned char)v_23;
    v_11 = (unsigned char)((long long)(- ((unsigned long)p_15 * v_7)) + -44199LL);
    result = (unsigned char)(~ ((long)(~ result) - p_17));
  }
  while_0_break: ;
  if (4294960843UL > (unsigned long)(! (((long)v_9 - p) | -549325758L))) {
    v_9 = (double)(18446744073709551615ULL % (unsigned long long)(((int)(
                                                                   v_9 - 146.) - (
                                                                   (int)result ^ (int)p_15)) + 926));
    v = (unsigned short)((((unsigned long)v - v_7) - (unsigned long)(
                          v_9 * -4.3602510969e+37)) + (unsigned long)(
                         ((int)((unsigned char)v_9) - (int)v_11) << (
                         18446744073422607626ULL * (unsigned long long)p_13 & 31ULL)));
    result = (unsigned char)(- ((unsigned long)(- v) + (unsigned long)p / (
                                                       p_5 + 308UL)));
  }
  else {
    v_21 = (unsigned char)(- v_7 | (unsigned long)(v_23 + (unsigned int)v_21) * (
                                   p_5 * 112UL));
    v_19 = (char)((long long)(- (- p_17)) % 35983LL);
    result = (unsigned char)((42734L / (p_17 / (long)((int)v_19 + 18) + 677L)) * (long)(
                             (int)p_13 + (int)p_13 % ((int)v_21 + 802)));
  }
  return result;
}


