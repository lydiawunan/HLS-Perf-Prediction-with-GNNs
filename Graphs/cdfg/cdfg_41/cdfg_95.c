#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 737110169
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p)
{
  unsigned long long v_13;
  long v_11;
  float v_9;
  char v_7;
  char v_4;
  double v;
  unsigned short result;
  v_13 = 64366ULL;
  v_11 = (long)p;
  v_9 = 2.43932788057e+38f;
  v_7 = (char)-108;
  v_4 = (char)-82;
  v = (double)p;
  while ((unsigned long)(- (430.79359146 + (double)v_9)) >= (((unsigned long)v + 3850945021UL) | (unsigned long)p) + (unsigned long)(! (
                                                            932066766 ^ (int)v))) {
    v_11 = v_13 % (unsigned long long)((unsigned long)v_11 % 50880UL + 613UL);
    v_13 = (unsigned long long)(-7831. + (-732.445268635 + (double)((long)p - 68846011L)));
    v_4 = (char)-58;
    v = (double)v_9;
  }
  while_0_break: ;
  result = (unsigned short)(((int)(v * (double)v_4) * ((int)p - 61)) / (
                            ((int)v_7 + ((int)p & (int)v_4)) + 731));
  return result;
}


