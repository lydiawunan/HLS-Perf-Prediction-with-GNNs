#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 361116381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, float p_11)
{
  double v_19;
  unsigned long v_17;
  short v_15;
  int v_13;
  short v_9;
  unsigned short v_7;
  signed char v_5;
  double v;
  char result;
  v_19 = -6336921882.43;
  v_17 = 4294913334UL;
  v_15 = (short)31759;
  v_13 = -150181138;
  v_9 = (short)p;
  v_7 = (unsigned short)p_11;
  v_5 = (signed char)88;
  v = 336.797878518;
  result = (char)-127;
  while ((unsigned long)(! ((unsigned int)(~ v_5) % ((7365U & (unsigned int)result) + 268U))) == 
         ((p + (unsigned long)v_13) / (unsigned long)(((int)v_9 - (int)result) + 701)) * (unsigned long)v_15) {
    result = v_17 - 4294909275UL;
    v_5 = (signed char)v_9;
    v_7 = (unsigned short)((p * (unsigned long)p_11 - 3382635454UL) % (
                           p + 531UL));
    v_9 = (short)((((int)v_15 >> 9UL) * ((int)v_5 % -76)) / ((int)((signed char)(- v_19)) / 117 + 802));
  }
  while_0_break: ;
  while ((double)((unsigned long)((-866656328L / ((long)4650644992.f + 134L)) % 175L) | (
                  p & 4294965800UL)) != v) {
    v_5 = (int)v_9 * (int)((short)((double)v_5 - -5977559875.69));
    v_9 = (short)(- (98.f / (p_11 + 934.f) + (float)((int)p_11 - v_13)));
    result = (char)(((p * 9238UL) / ((unsigned long)v_7 * p + 388UL)) * (
                    9UL % (p + 178UL)));
    v = (double)(~ (- p) - ~ p);
  }
  while_0_break_0: ;
  return result;
}


