#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 673407753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned int p_4, double p_7, signed char p_19,
                unsigned int p_21)
{
  unsigned short v_29;
  unsigned int v_27;
  unsigned long v_25;
  signed char v_23;
  long v_17;
  double v_15;
  long v_13;
  int v_11;
  signed char v_9;
  char v;
  signed char result;
  v_29 = (unsigned short)44821;
  v_27 = 54870U;
  v_23 = (signed char)p_4;
  v_17 = 30115L;
  v_15 = -1.74898277492e+38;
  v = (char)p_4;
  if (((-55098LL - (long long)v_29) % -49557LL ^ (long long)((unsigned int)(! v) / (
                                                             ! p_21 + 635U))) == (long long)(- (
      3741914113UL % (unsigned long)(- p_21 + 587U)))) {
    v_17 = - p;
    v_25 = (unsigned long)(- ((long)(p_7 - p_7) + ~ p));
    v_11 = (int)((unsigned long)(p_4 >> ((int)v_23 / 57891 & 31)) / (
                 (v_25 / 4294967264UL - (unsigned long)(p + 212L)) + 283UL));
  }
  else {
    v = (char)((unsigned int)(- p_7) % (p_21 + 394U) - (p_4 - (unsigned int)p_7) % (
                                                       (unsigned int)p_7 + 185U));
    v_11 = (int)(- (v_15 / ((double)v_27 + 518.)) - (double)((unsigned long long)v ^ 93605787ULL));
    v_15 = (double)(~ p);
  }
  if (-5LL == (long long)(- (v_15 / ((double)v_17 + 769.)) / ((double)(
                                                              (unsigned int)(
                                                              p_7 - (double)p_19) / (
                                                              (4294918457U - p_21) + 433U)) + 830.))) {
    v_9 = (signed char)(v_11 << 30LL);
    result = (signed char)((1061350496LL / (((long long)v - -147275817LL) + 376LL)) % (long long)(
                           ((long)((int)((signed char)p_7) / ((int)v_9 + 354)) + (
                            p | (long)-6.96555040772e+37f)) + 138L));
    result = (signed char)(~ ((unsigned long)((long)result / (p + 628L)) / (unsigned long)(
                              p_4 * 4290625224U + 247U)));
  }
  else {
    v_13 = (long)(- (~ (! 4294922880U)));
    result = (signed char)(- (-2L + (-90L + v_13)));
  }
  return result;
}


