#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 345753120
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, double p_5, short p_9, double p_11, float p_15)
{
  unsigned short v_29;
  unsigned int v_27;
  char v_25;
  unsigned long v_23;
  double v_21;
  signed char v_19;
  long long v_17;
  long v_13;
  char v_7;
  unsigned char v;
  long result;
  v_29 = (unsigned short)56480;
  v_27 = 53587U;
  v_25 = (char)p_11;
  v_23 = 4294905393UL;
  v_21 = (double)p_15;
  v_19 = (signed char)103;
  v_17 = 12931LL;
  while ((double)(32UL % (unsigned long)((int)p_9 + 451) + (unsigned long)(
                                                           (int)v_19 % (
                                                           (int)((signed char)v_21) + 32)) * (
                                                           62439UL % (
                                                           v_23 + 771UL))) <= 
         (double)v_25 - p_5) {
    v_17 = (unsigned long)v_27 * 34576UL;
    v_27 = 73U;
    v_19 = (signed char)((unsigned long)v_27 * ~ ((unsigned long)p + 3809328360UL));
    v_25 = (char)(! (250 >> ((int)p_9 & 7)) / ((int)(- (-4036662272.f - (float)v_29)) + 701));
  }
  while_0_break: ;
  if (v_17 > (long long)(- (1.84467440732e+19 / ((-28819. + p_5) + 447.)))) {
    v_7 = (char)p_11;
    v = (unsigned char)(((long long)v_7 + -875867560LL) - (long long)(! (
                        (int)p_9 % 43580)));
    result = (long)(((unsigned long)v - 35770UL) ^ (unsigned long)((int)p / (
                                                                   (int)((unsigned char)(- p_5)) + 158)));
  }
  else {
    v_13 = (long)(((double)p_15 - p_11) / (double)(- p_15 + 441.f) + - (- p_11));
    result = (long)(- ((float)v_13 / (p_15 + 788.f)) / ((float)(((int)p_9 * (int)p) * (
                                                                84 * (int)((char)p_11))) + 657.f));
  }
  return result;
}


