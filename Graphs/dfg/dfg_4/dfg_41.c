//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1047027485
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned short p_4, unsigned int p_9,
                   unsigned long p_15)
{
  signed char v_13;
  char v_11;
  unsigned short v_7;
  long v;
  unsigned short result;
  v_11 = (char)31;
  v_7 = (unsigned short)58184;
  v = (long)(13944. * - (((double)p / -5484881891.44) / 155.));
  v_13 = (signed char)(! p_15);
  v = (long)((unsigned long)(- ((long)v_11 - v)) - ((unsigned long)(9595L % (
                                                                    v + 95L)) & (unsigned long)(! p_9)) * (unsigned long)(
                                                   v / (long)((int)(! v_13) + 9)));
  result = (unsigned short)((unsigned long)((long)((50 - (int)p) + 122 * (int)p_4) * (
                                            ~ v * (long)((int)((unsigned short)-1.06497836873e+37f) * (int)v_7))) * (unsigned long)(- (
                            (unsigned int)1.83378763661e+36f * - p_9)));
  return result;
}


