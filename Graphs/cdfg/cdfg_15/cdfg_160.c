#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 916513846
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, double p_5, double p_7, unsigned char p_9,
                   char p_11)
{
  unsigned long long v_13;
  unsigned long v;
  unsigned short result;
  v_13 = 18446744073429315548ULL;
  if ((double)((int)p_11 / ((int)(- (- p_11)) + 877)) == ((double)(~ v_13) - - p_7) + (double)(
                                                         (int)((short)(- p_7)) % (
                                                         (int)(! p) + 458))) 
    v = 4294942808UL;
  else v = (unsigned long)(- (p_5 + 22320.));
  result = (unsigned short)(! v % (unsigned long)(- ((int)p / 9585) + 851));
  return result;
}


