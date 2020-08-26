repuire_realative 'FastNeurons-1.2.0/lib/fast_neurons'

f = File.open("fakeNewsDataset/fake/biz01.fake.txt");


nn_foget = FastNeurons::NN.new([2,1],[:Sigmoid])

nn_input0 = FastNeurons::NN.new([2,1],[:Sigmoid])

nn_input1 = FastNeurons::NN.new([2,1],[:Tanh])

nn_output0 = FastNeurons::NN.new([2,1],[:Sigmoid])

nn_output1 = FastNeurons::NN.new([2,1],[:Tanh])

nn_forget.randomize
nn_input0.randomize
nn_input1.randomize
nn_output0.randomize
nn_output1.randomize