#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 373744671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned short p_9, unsigned int p_17)
{
  long v_15;
  unsigned char v_13;
  unsigned long v_11;
  signed char v_7;
  float v_4;
  signed char v;
  char result;
  v_15 = -965089158L;
  v_13 = p;
  v_11 = 4294904665UL;
  v_7 = (signed char)p_17;
  v_4 = (float)p_17;
  v = (signed char)36;
  result = (char)33;
  v_4 = (float)(((unsigned long)(- v_4 * - v_4) & (v_11 / (unsigned long)(
                                                   (int)p_9 + 717)) / (unsigned long)(
                                                  (int)(! v_7) + 483)) / (unsigned long)(
                p_17 + 675U));
  v_11 = (unsigned long)(((long)v_13 + (((long)p + v_15) - (long)((int)p_9 - (int)result))) % (
                         (long)-2.78931383903e+38f + 435L));
  v_7 = (signed char)(((unsigned long)(- ((int)p | (int)p_9)) + ((unsigned long)(
                                                                 (int)result << (
                                                                 (int)((char)-966.371276855f) & 7)) + ~ v_11)) % (unsigned long)(
                      (int)v_13 + 509));
  result = (char)(! ((int)v ^ (int)((signed char)v_4)) / 5 - ! ((929616312 - (int)p) - 
                                                                784287431 / (
                                                                (int)v_7 + 424)));
  return result;
}


