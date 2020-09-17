#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT _____58_840_59229340;

Block __59009820;

Block __59009620;

Block __59009260;

void code__59009260() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59726960(),_5818_49816700______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59009260() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59009260 = block;
   block->owner = (Object)__59009620;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59009260;

   return block;
};

void code__59009620() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49816920______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59727040();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59009260();
   }
      }
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59726900(),_5817_49816820______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59009620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59009620 = block;
   block->owner = (Object)__59009820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59009620;

   return block;
};

Block __59008580;

Block __59008380;

Block __59008000;

void code__59008000() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = _5818_49816700______58_84_47546300______58_840_59229340->c_value;
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__59726640();
            dst = add_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),1),dst);
      set_value_pos(pool_state);
   dst; }),_5818_49816700______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59726540(),_5817_49816820______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(make__59726480(),_5819_45760080______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59008000() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59008000 = block;
   block->owner = (Object)__59008380;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59008000;

   return block;
};

void code__59008380() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = rst_49816920______58_84_47546300______58_840_59229340->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__59726780();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59008000();
   }
      }
   }
}

Block make__59008380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59008380 = block;
   block->owner = (Object)__59008580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59008380;

   return block;
};

void code__59008580() {
 code__59008380();
}

Block make__59008580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59008580 = block;
   block->owner = (Object)__59009820;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59008580;

   return block;
};

void code__59009820() {
 code__59009620();
   {
      Value cond = fill_49816880______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__59008580();
   }
      }
   }
}

Block make__59009820() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59009820 = block;
   block->owner = (Object)__59164320;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59009820;

   return block;
};

Block __59164200;

void code__59164200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726420(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726360(),rst_49816920______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726300(),req_49816900______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726240(),fill_49816880______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726180(),rst_49816920______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726120(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59726040(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725960(),rst_49816920______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725900(),fill_49816880______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725840(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725720(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725660(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725600(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725540(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725480(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725420(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725360(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725280(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725220(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725140(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725080(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59725000(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724900(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724840(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724780(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724720(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724660(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724600(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724540(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724480(),fill_49816880______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724420(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724360(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724300(),req_49816900______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724240(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724180(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724120(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59724060(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723980(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723920(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723840(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723780(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723700(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723600(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723540(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723480(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723420(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723360(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723300(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723240(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723180(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723100(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59723040(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722960(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722900(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722820(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722720(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722660(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722600(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722540(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722480(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722420(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722360(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722300(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722240(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722180(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722120(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722060(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59722000(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721940(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721860(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721780(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721720(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721640(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721540(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_seq(make__59721480(),clk_49816980______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   hw_wait(make_delay(10,PS),__59229460);
}

Block make__59164200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59164200 = block;
   block->owner = (Object)__59229460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59164200;

   return block;
};

Block __59288580;

void code__59288580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49816980______58_84_47546300______58_840_59229340->c_value,clk_48906520_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49816920______58_84_47546300______58_840_59229340->c_value,rst_48906500_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49816880______58_84_47546300______58_840_59229340->c_value,fill_48906460_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(req_49816900______58_84_47546300______58_840_59229340->c_value,req_48906360_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(clk_49816980______58_84_47546300______58_840_59229340->c_value,clk_58760280_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(rst_49816920______58_84_47546300______58_840_59229340->c_value,rst_58760240_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(fill_49816880______58_84_47546300______58_840_59229340->c_value,fill_58760220_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__0_49816860______58_84_47546300______58_840_59229340->c_value,req_58760160_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59288580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59288580 = block;
   block->owner = (Object)__59347140;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59288580;

   return block;
};

Block __59288520;

void code__59288520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,ack__0_49816860______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,ack__1_49816840______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59288520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59288520 = block;
   block->owner = (Object)__59346980;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59288520;

   return block;
};

Block __49322280;

Block __49628280;

void code__49628280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal_range(dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value,make_ref_rangeS(mem_49157740_channel__x_581_47544360______58_84_47546300______58_840_59229340,value2integer(abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value),value2integer(abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value)));
      set_value_pos(pool_state);
   }
}

Block make__49628280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49628280 = block;
   block->owner = (Object)__49322280;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49628280;

   return block;
};

void code__49322280() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = mem_49157740_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value;
            idx = value2integer(abus__r_48927460_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_signed(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_signed(),8),dst);
      set_value_pos(pool_state);
   dst; }),dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      Value cond = trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value;
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__49628280();
   }
      }
   }
}

Block make__49322280() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49322280 = block;
   block->owner = (Object)__45396780;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49322280;

   return block;
};

Block __59346200;

void code__59346200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value,_5817_49816820______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59346200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59346200 = block;
   block->owner = (Object)__59346000;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59346200;

   return block;
};

Block __59345940;

void code__59345940() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5817_49816820______58_84_47546300______58_840_59229340->c_value,trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59345940() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59345940 = block;
   block->owner = (Object)__59345760;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59345940;

   return block;
};

Block __59345400;

void code__59345400() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value,_5818_49816700______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59345400() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59345400 = block;
   block->owner = (Object)__59345240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59345400;

   return block;
};

Block __59345200;

void code__59345200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5818_49816700______58_84_47546300______58_840_59229340->c_value,abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59345200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59345200 = block;
   block->owner = (Object)__59345040;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59345200;

   return block;
};

Block __59344740;

void code__59344740() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value,_5819_45760080______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59344740() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59344740 = block;
   block->owner = (Object)__59344580;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59344740;

   return block;
};

Block __59344540;

void code__59344540() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5819_45760080______58_84_47546300______58_840_59229340->c_value,dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59344540() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59344540 = block;
   block->owner = (Object)__59344360;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59344540;

   return block;
};

Block __59343600;

void code__59343600() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->c_value,_5815_49240040_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59343600() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59343600 = block;
   block->owner = (Object)__59492420;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59343600;

   return block;
};

Block __59343520;

void code__59343520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,trig__r_47863720_channel__x_581_47544360______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,abus__r_48927460_channel__x_581_47544360______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59343520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59343520 = block;
   block->owner = (Object)__59492260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59343520;

   return block;
};

Block __59645660;

void code__59645660() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->c_value,_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59645660() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59645660 = block;
   block->owner = (Object)__59645480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59645660;

   return block;
};

Block __59645440;

void code__59645440() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59645440() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59645440 = block;
   block->owner = (Object)__59645260;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59645440;

   return block;
};

Block __59643800;

void code__59643800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->c_value,_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59643800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59643800 = block;
   block->owner = (Object)__59643560;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59643800;

   return block;
};

Block __59643520;

void code__59643520() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->c_value,reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59643520() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59643520 = block;
   block->owner = (Object)__59643340;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59643520;

   return block;
};

Block __59661880;

void code__59661880() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->c_value,_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59661880() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59661880 = block;
   block->owner = (Object)__59661660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59661880;

   return block;
};

Block __59661580;

void code__59661580() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59661580() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59661580 = block;
   block->owner = (Object)__59661400;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59661580;

   return block;
};

Block __59642640;

void code__59642640() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->c_value,_5843_58828080_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->c_value,_5844_58895340_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59642640() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59642640 = block;
   block->owner = (Object)__59661240;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59642640;

   return block;
};

Block __59658900;

void code__59658900() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->c_value,_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59658900() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59658900 = block;
   block->owner = (Object)__59658660;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59658900;

   return block;
};

Block __59658620;

void code__59658620() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->c_value,reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340);
      set_value_pos(pool_state);
   }
}

Block make__59658620() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __59658620 = block;
   block->owner = (Object)__59658440;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__59658620;

   return block;
};

Value make__59727040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59726960() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_bit(),1),1,data);
}

Value make__59726900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59726640() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__59726540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726480() {
   static unsigned long long data[] = { 16ULL };
   return make_set_value(get_type_vector(get_type_signed(),8),1,data);
}

Value make__59726420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59726040() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725720() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725660() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725280() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725220() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725140() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59725000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724900() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59724060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723980() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723920() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723840() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723700() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723600() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723420() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723360() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723300() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723240() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723180() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723100() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59723040() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722960() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722900() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722820() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722660() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722600() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722540() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722480() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722420() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722360() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722300() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722240() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722180() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722060() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59722000() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721940() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721860() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721780() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721720() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721640() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721540() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_bit(),1,data);
}

Value make__59721480() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_bit(),1,data);
}

Scope _____58_84_47546300;

SignalI clk_49816980______58_84_47546300______58_840_59229340;

SignalI makeclk_49816980() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   clk_49816980______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = "clk";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI rst_49816920______58_84_47546300______58_840_59229340;

SignalI makerst_49816920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   rst_49816920______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = "rst";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI req_49816900______58_84_47546300______58_840_59229340;

SignalI makereq_49816900() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   req_49816900______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = "req";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI fill_49816880______58_84_47546300______58_840_59229340;

SignalI makefill_49816880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   fill_49816880______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = "fill";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__0_49816860______58_84_47546300______58_840_59229340;

SignalI makeack__0_49816860() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__0_49816860______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = "ack_0";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI ack__1_49816840______58_84_47546300______58_840_59229340;

SignalI makeack__1_49816840() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   ack__1_49816840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = "ack_1";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5817_49816820______58_84_47546300______58_840_59229340;

SignalI make_5817_49816820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5817_49816820______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = ":17";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5818_49816700______58_84_47546300______58_840_59229340;

SignalI make_5818_49816700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5818_49816700______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = ":18";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI _5819_45760080______58_84_47546300______58_840_59229340;

SignalI make_5819_45760080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   _5819_45760080______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)_____58_84_47546300;
   signalI->name = ":19";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SystemI layer0_49756520;

SystemI makelayer0_49756520() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer0_49756520 = systemI;
   systemI->owner = (Object)_____58_84_47546300;
   systemI->name = "layer0";
   systemI->system = layer0_58_840_48911000;

   return systemI;
};

SystemI layer1_59011960;

SystemI makelayer1_59011960() {
   SystemI systemI = malloc(sizeof(SystemIS));
   systemI->kind = SYSTEMI;

   layer1_59011960 = systemI;
   systemI->owner = (Object)_____58_84_47546300;
   systemI->name = "layer1";
   systemI->system = layer1_58_840_58721340;

   return systemI;
};

Scope channel__x_581_47544360;

SignalI trig__r_47863720_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI maketrig__r_47863720() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__r_47863720_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "trig_r";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI maketrig__w_47861300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "trig_w";
   signalI->type = get_type_bit();
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI makedbus__r_49090700() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "dbus_r";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI makedbus__w_48927540() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "dbus_w";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__r_48927460_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI makeabus__r_48927460() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_48927460_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI makeabus__w_48927380() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI mem_49157740_channel__x_581_47544360______58_84_47546300______58_840_59229340;

SignalI makemem_49157740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   mem_49157740_channel__x_581_47544360______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__x_581_47544360;
   signalI->name = "mem";
   signalI->type = get_type_vector(get_type_vector(get_type_signed(),8),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope raddr_582_47543440;

Scope makeraddr_582_47543440() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_582_47543440 = scope;
   scope->owner = (Object)channel__x_581_47544360;
   scope->name = "raddr:2";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_587_47575620;

Scope makewaddr_587_47575620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_587_47575620 = scope;
   scope->owner = (Object)channel__x_581_47544360;
   scope->name = "waddr:7";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_5812_47574220;

Behavior __59492420;

Behavior make__59492420() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59492420 = behavior;
   behavior->owner = (Object)rinc_5812_47574220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340);
   dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->any = realloc(dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->any,dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->any[dbus__r_49090700_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59343600();

   return behavior;
}

Behavior __59492260;

Behavior make__59492260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59492260 = behavior;
   behavior->owner = (Object)rinc_5812_47574220;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5813_49239760_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5814_49239620_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59343520();

   return behavior;
}

Scope makerinc_5812_47574220() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5812_47574220 = scope;
   scope->owner = (Object)channel__x_581_47544360;
   scope->name = "rinc:12";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59492420();
   scope->behaviors[1] = make__59492260();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5816_47849040;

Scope makewinc_5816_47849040() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5816_47849040 = scope;
   scope->owner = (Object)channel__x_581_47544360;
   scope->name = "winc:16";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5820_47848620;

Scope makerdec_5820_47848620() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5820_47848620 = scope;
   scope->owner = (Object)channel__x_581_47544360;
   scope->name = "rdec:20";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5825_47848200;

Scope makewdec_5825_47848200() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5825_47848200 = scope;
   scope->owner = (Object)channel__x_581_47544360;
   scope->name = "wdec:25";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __45396780;

Behavior make__45396780() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __45396780 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(NEGEDGE,clk_49816980______58_84_47546300______58_840_59229340);
   clk_49816980______58_84_47546300______58_840_59229340->num_neg += 1;
   clk_49816980______58_84_47546300______58_840_59229340->neg = realloc(clk_49816980______58_84_47546300______58_840_59229340->neg,clk_49816980______58_84_47546300______58_840_59229340->num_neg*sizeof(Object));
clk_49816980______58_84_47546300______58_840_59229340->neg[clk_49816980______58_84_47546300______58_840_59229340->num_neg-1] = (Object)behavior;
   behavior->block = make__49322280();

   return behavior;
}

Behavior __59346000;

Behavior make__59346000() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59346000 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340);
   trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any += 1;
   trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->any = realloc(trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->any,trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->any[trig__w_47861300_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59346200();

   return behavior;
}

Behavior __59345760;

Behavior make__59345760() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59345760 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5817_49816820______58_84_47546300______58_840_59229340);
   _5817_49816820______58_84_47546300______58_840_59229340->num_any += 1;
   _5817_49816820______58_84_47546300______58_840_59229340->any = realloc(_5817_49816820______58_84_47546300______58_840_59229340->any,_5817_49816820______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5817_49816820______58_84_47546300______58_840_59229340->any[_5817_49816820______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59345940();

   return behavior;
}

Behavior __59345240;

Behavior make__59345240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59345240 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340);
   abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any += 1;
   abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->any = realloc(abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->any,abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->any[abus__w_48927380_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59345400();

   return behavior;
}

Behavior __59345040;

Behavior make__59345040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59345040 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5818_49816700______58_84_47546300______58_840_59229340);
   _5818_49816700______58_84_47546300______58_840_59229340->num_any += 1;
   _5818_49816700______58_84_47546300______58_840_59229340->any = realloc(_5818_49816700______58_84_47546300______58_840_59229340->any,_5818_49816700______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5818_49816700______58_84_47546300______58_840_59229340->any[_5818_49816700______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59345200();

   return behavior;
}

Behavior __59344580;

Behavior make__59344580() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59344580 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340);
   dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any += 1;
   dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->any = realloc(dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->any,dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->any[dbus__w_48927540_channel__x_581_47544360______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59344740();

   return behavior;
}

Behavior __59344360;

Behavior make__59344360() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59344360 = behavior;
   behavior->owner = (Object)channel__x_581_47544360;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5819_45760080______58_84_47546300______58_840_59229340);
   _5819_45760080______58_84_47546300______58_840_59229340->num_any += 1;
   _5819_45760080______58_84_47546300______58_840_59229340->any = realloc(_5819_45760080______58_84_47546300______58_840_59229340->any,_5819_45760080______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5819_45760080______58_84_47546300______58_840_59229340->any[_5819_45760080______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59344540();

   return behavior;
}

Scope makechannel__x_581_47544360() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__x_581_47544360 = scope;
   scope->owner = (Object)_____58_84_47546300;
   scope->name = "channel_x:1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 7;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = maketrig__r_47863720();
   scope->inners[1] = maketrig__w_47861300();
   scope->inners[2] = makedbus__r_49090700();
   scope->inners[3] = makedbus__w_48927540();
   scope->inners[4] = makeabus__r_48927460();
   scope->inners[5] = makeabus__w_48927380();
   scope->inners[6] = makemem_49157740();
   scope->num_scopes = 6;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeraddr_582_47543440();
   scope->scopes[1] = makewaddr_587_47575620();
   scope->scopes[2] = makerinc_5812_47574220();
   scope->scopes[3] = makewinc_5816_47849040();
   scope->scopes[4] = makerdec_5820_47848620();
   scope->scopes[5] = makewdec_5825_47848200();
   scope->num_behaviors = 7;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__45396780();
   scope->behaviors[1] = make__59346000();
   scope->behaviors[2] = make__59345760();
   scope->behaviors[3] = make__59345240();
   scope->behaviors[4] = make__59345040();
   scope->behaviors[5] = make__59344580();
   scope->behaviors[6] = make__59344360();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a0_5830_45473840;

SignalI reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340;

SignalI makereg__0_49454480() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__a0_5830_45473840;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340;

SignalI makereg__1_49547180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__a0_5830_45473840;
   signalI->name = "reg_1";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_5831_45577460;

Behavior __59645480;

Behavior make__59645480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59645480 = behavior;
   behavior->owner = (Object)anum_5831_45577460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
   reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any = realloc(reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any,reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any[reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59645660();

   return behavior;
}

Behavior __59645260;

Behavior make__59645260() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59645260 = behavior;
   behavior->owner = (Object)anum_5831_45577460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5832_49549040_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59645440();

   return behavior;
}

Behavior __59643560;

Behavior make__59643560() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59643560 = behavior;
   behavior->owner = (Object)anum_5831_45577460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
   reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any += 1;
   reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any = realloc(reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any,reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any[reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59643800();

   return behavior;
}

Behavior __59643340;

Behavior make__59643340() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59643340 = behavior;
   behavior->owner = (Object)anum_5831_45577460;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   _5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   _5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[_5833_49756660_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59643520();

   return behavior;
}

Scope makeanum_5831_45577460() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5831_45577460 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "anum:31";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59645480();
   scope->behaviors[1] = make__59645260();
   scope->behaviors[2] = make__59643560();
   scope->behaviors[3] = make__59643340();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5834_47907680;

Scope makeraddr_5834_47907680() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5834_47907680 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "raddr:34";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_5838_47907120;

Scope makewaddr_5838_47907120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5838_47907120 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "waddr:38";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_5842_47930980;

SignalI abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340;

SignalI makeabus__r_47930180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_5842_47930980;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Behavior __59661660;

Behavior make__59661660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59661660 = behavior;
   behavior->owner = (Object)rinc_5842_47930980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
   abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any += 1;
   abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any = realloc(abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any,abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any[abus__r_47930180_rinc_5842_47930980_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59661880();

   return behavior;
}

Behavior __59661400;

Behavior make__59661400() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59661400 = behavior;
   behavior->owner = (Object)rinc_5842_47930980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_5845_58895200_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59661580();

   return behavior;
}

Behavior __59661240;

Behavior make__59661240() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59661240 = behavior;
   behavior->owner = (Object)rinc_5842_47930980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
   reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any = realloc(reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any,reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any[reg__0_49454480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340);
   reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any += 1;
   reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any = realloc(reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any,reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->any[reg__1_49547180_channel__a0_5830_45473840______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59642640();

   return behavior;
}

Scope makerinc_5842_47930980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5842_47930980 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "rinc:42";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_47930180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 3;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59661660();
   scope->behaviors[1] = make__59661400();
   scope->behaviors[2] = make__59661240();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5846_49254700;

SignalI abus__w_49253300_winc_5846_49254700_channel__a0_5830_45473840______58_84_47546300______58_840_59229340;

SignalI makeabus__w_49253300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49253300_winc_5846_49254700_channel__a0_5830_45473840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_5846_49254700;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewinc_5846_49254700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5846_49254700 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "winc:46";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49253300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5850_49252480;

SignalI abus__r_49251680_rdec_5850_49252480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340;

SignalI makeabus__r_49251680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49251680_rdec_5850_49252480_channel__a0_5830_45473840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_5850_49252480;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_5850_49252480() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5850_49252480 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "rdec:50";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49251680();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5855_49251560;

SignalI abus__w_49251180_wdec_5855_49251560_channel__a0_5830_45473840______58_84_47546300______58_840_59229340;

SignalI makeabus__w_49251180() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49251180_wdec_5855_49251560_channel__a0_5830_45473840______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_5855_49251560;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),1);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_5855_49251560() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5855_49251560 = scope;
   scope->owner = (Object)channel__a0_5830_45473840;
   scope->name = "wdec:55";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49251180();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a0_5830_45473840() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a0_5830_45473840 = scope;
   scope->owner = (Object)_____58_84_47546300;
   scope->name = "channel_a0:30";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 2;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49454480();
   scope->inners[1] = makereg__1_49547180();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5831_45577460();
   scope->scopes[1] = makeraddr_5834_47907680();
   scope->scopes[2] = makewaddr_5838_47907120();
   scope->scopes[3] = makerinc_5842_47930980();
   scope->scopes[4] = makewinc_5846_49254700();
   scope->scopes[5] = makerdec_5850_49252480();
   scope->scopes[6] = makewdec_5855_49251560();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope channel__a1_5860_49546940;

SignalI reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340;

SignalI makereg__0_49817220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)channel__a1_5860_49546940;
   signalI->name = "reg_0";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope anum_5861_49546640;

Behavior __59658660;

Behavior make__59658660() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59658660 = behavior;
   behavior->owner = (Object)anum_5861_49546640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340);
   reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->num_any += 1;
   reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->any = realloc(reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->any,reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->any[reg__0_49817220_channel__a1_5860_49546940______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59658900();

   return behavior;
}

Behavior __59658440;

Behavior make__59658440() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59658440 = behavior;
   behavior->owner = (Object)anum_5861_49546640;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   _5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   _5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[_5862_59012120_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59658620();

   return behavior;
}

Scope makeanum_5861_49546640() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   anum_5861_49546640 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "anum:61";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59658660();
   scope->behaviors[1] = make__59658440();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope raddr_5863_49694060;

Scope makeraddr_5863_49694060() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   raddr_5863_49694060 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "raddr:63";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope waddr_5866_49693540;

Scope makewaddr_5866_49693540() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   waddr_5866_49693540 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "waddr:66";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rinc_5869_49693120;

SignalI abus__r_49692740_rinc_5869_49693120_channel__a1_5860_49546940______58_84_47546300______58_840_59229340;

SignalI makeabus__r_49692740() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49692740_rinc_5869_49693120_channel__a1_5860_49546940______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rinc_5869_49693120;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerinc_5869_49693120() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rinc_5869_49693120 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "rinc:69";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49692740();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope winc_5872_49741740;

SignalI abus__w_49741360_winc_5872_49741740_channel__a1_5860_49546940______58_84_47546300______58_840_59229340;

SignalI makeabus__w_49741360() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49741360_winc_5872_49741740_channel__a1_5860_49546940______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)winc_5872_49741740;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewinc_5872_49741740() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   winc_5872_49741740 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "winc:72";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49741360();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope rdec_5875_49741240;

SignalI abus__r_49740820_rdec_5875_49741240_channel__a1_5860_49546940______58_84_47546300______58_840_59229340;

SignalI makeabus__r_49740820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__r_49740820_rdec_5875_49741240_channel__a1_5860_49546940______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)rdec_5875_49741240;
   signalI->name = "abus_r";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makerdec_5875_49741240() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   rdec_5875_49741240 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "rdec:75";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__r_49740820();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope wdec_5879_49740500;

SignalI abus__w_49740120_wdec_5879_49740500_channel__a1_5860_49546940______58_84_47546300______58_840_59229340;

SignalI makeabus__w_49740120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   abus__w_49740120_wdec_5879_49740500_channel__a1_5860_49546940______58_84_47546300______58_840_59229340 = signalI;
   signalI->owner = (Object)wdec_5879_49740500;
   signalI->name = "abus_w";
   signalI->type = get_type_vector(get_type_bit(),2);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Scope makewdec_5879_49740500() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   wdec_5879_49740500 = scope;
   scope->owner = (Object)channel__a1_5860_49546940;
   scope->name = "wdec:79";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeabus__w_49740120();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Scope makechannel__a1_5860_49546940() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   channel__a1_5860_49546940 = scope;
   scope->owner = (Object)_____58_84_47546300;
   scope->name = "channel_a1:60";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makereg__0_49817220();
   scope->num_scopes = 7;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makeanum_5861_49546640();
   scope->scopes[1] = makeraddr_5863_49694060();
   scope->scopes[2] = makewaddr_5866_49693540();
   scope->scopes[3] = makerinc_5869_49693120();
   scope->scopes[4] = makewinc_5872_49741740();
   scope->scopes[5] = makerdec_5875_49741240();
   scope->scopes[6] = makewdec_5879_49740500();
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __59164320;

Behavior make__59164320() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59164320 = behavior;
   behavior->owner = (Object)_____58_84_47546300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(POSEDGE,clk_49816980______58_84_47546300______58_840_59229340);
   clk_49816980______58_84_47546300______58_840_59229340->num_pos += 1;
   clk_49816980______58_84_47546300______58_840_59229340->pos = realloc(clk_49816980______58_84_47546300______58_840_59229340->pos,clk_49816980______58_84_47546300______58_840_59229340->num_pos*sizeof(Object));
clk_49816980______58_84_47546300______58_840_59229340->pos[clk_49816980______58_84_47546300______58_840_59229340->num_pos-1] = (Object)behavior;
   behavior->block = make__59009820();

   return behavior;
}

Behavior __59229460;

Behavior make__59229460() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59229460 = behavior;
   register_timed_behavior(behavior);
   behavior->owner = (Object)_____58_84_47546300;
   behavior->activated = 0;
   behavior->timed = 1;
   behavior->num_events = 0;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->block = make__59164200();

   return behavior;
}

Behavior __59347140;

Behavior make__59347140() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59347140 = behavior;
   behavior->owner = (Object)_____58_84_47546300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 5;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,clk_49816980______58_84_47546300______58_840_59229340);
   clk_49816980______58_84_47546300______58_840_59229340->num_any += 1;
   clk_49816980______58_84_47546300______58_840_59229340->any = realloc(clk_49816980______58_84_47546300______58_840_59229340->any,clk_49816980______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
clk_49816980______58_84_47546300______58_840_59229340->any[clk_49816980______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,rst_49816920______58_84_47546300______58_840_59229340);
   rst_49816920______58_84_47546300______58_840_59229340->num_any += 1;
   rst_49816920______58_84_47546300______58_840_59229340->any = realloc(rst_49816920______58_84_47546300______58_840_59229340->any,rst_49816920______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
rst_49816920______58_84_47546300______58_840_59229340->any[rst_49816920______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,fill_49816880______58_84_47546300______58_840_59229340);
   fill_49816880______58_84_47546300______58_840_59229340->num_any += 1;
   fill_49816880______58_84_47546300______58_840_59229340->any = realloc(fill_49816880______58_84_47546300______58_840_59229340->any,fill_49816880______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
fill_49816880______58_84_47546300______58_840_59229340->any[fill_49816880______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[3] = make_event(ANYEDGE,req_49816900______58_84_47546300______58_840_59229340);
   req_49816900______58_84_47546300______58_840_59229340->num_any += 1;
   req_49816900______58_84_47546300______58_840_59229340->any = realloc(req_49816900______58_84_47546300______58_840_59229340->any,req_49816900______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
req_49816900______58_84_47546300______58_840_59229340->any[req_49816900______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[4] = make_event(ANYEDGE,ack__0_49816860______58_84_47546300______58_840_59229340);
   ack__0_49816860______58_84_47546300______58_840_59229340->num_any += 1;
   ack__0_49816860______58_84_47546300______58_840_59229340->any = realloc(ack__0_49816860______58_84_47546300______58_840_59229340->any,ack__0_49816860______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__0_49816860______58_84_47546300______58_840_59229340->any[ack__0_49816860______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59288580();

   return behavior;
}

Behavior __59346980;

Behavior make__59346980() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __59346980 = behavior;
   behavior->owner = (Object)_____58_84_47546300;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340);
   ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any += 1;
   ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any = realloc(ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any,ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->any[ack__layer_49239960_layer0_58_840_48911000______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340);
   ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any += 1;
   ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any = realloc(ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any,ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any*sizeof(Object));
ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->any[ack__layer_58895300_layer1_58_840_58721340______58_84_47546300______58_840_59229340->num_any-1] = (Object)behavior;
   behavior->block = make__59288520();

   return behavior;
}

Scope make_____58_84_47546300() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   _____58_84_47546300 = scope;
   scope->owner = (Object)_____58_840_59229340;
   scope->name = "__:T";
   scope->num_systemIs = 2;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->systemIs[0] = makelayer0_49756520();
   scope->systemIs[1] = makelayer1_59011960();
   scope->num_inners = 9;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makeclk_49816980();
   scope->inners[1] = makerst_49816920();
   scope->inners[2] = makereq_49816900();
   scope->inners[3] = makefill_49816880();
   scope->inners[4] = makeack__0_49816860();
   scope->inners[5] = makeack__1_49816840();
   scope->inners[6] = make_5817_49816820();
   scope->inners[7] = make_5818_49816700();
   scope->inners[8] = make_5819_45760080();
   scope->num_scopes = 3;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = makechannel__x_581_47544360();
   scope->scopes[1] = makechannel__a0_5830_45473840();
   scope->scopes[2] = makechannel__a1_5860_49546940();
   scope->num_behaviors = 4;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__59164320();
   scope->behaviors[1] = make__59229460();
   scope->behaviors[2] = make__59347140();
   scope->behaviors[3] = make__59346980();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT make_____58_840_59229340() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   _____58_840_59229340 = systemT;
systemT->owner = NULL;
   systemT->name = "__:T0";
   systemT->num_inputs = 0;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->num_outputs = 0;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make_____58_84_47546300();

   return systemT;
}