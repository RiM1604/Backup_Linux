# Br0GPT

## Progress :
 ### Implemented 
    - question-answering bot without memory(emb. retiriever,LLM- )
    - Feeded PDF docs, autoconversion to txt file
    - used FAISS docs. store as Database
    - used Flask for frontend
    - input can be in text or audio form

 ### Immediate Goals 
    - user feedback, based on which lesser accurate documents can be retreiverd
    - uploading user documents i.e., extending our database
    - Memory factor
    - Local LLM 
    -  API Calls  // already almost done

 ### Research
    - Studying different retrievers,readers,document stores and setting a standard for usage in differnet applications


## Installation

#### Create conda environment (Optional)
Firstly, we will create a conda environment called *transcription*
```bash
conda create -n BROGPT 
```
Secondly, we will login to the *transcription* environment
```bash
conda activate BROGPT
```
#### upgrade the pip beforehand
```bash
pip install --upgrade pip
```
#### pip install libraries
```bash
pip install -r requirements.txt
```
### Temporary running process

run the python files in order:
   1.AutoPDFconversion.py  - makes the supplied PDF in scrap directory into chunks
   2.preprocessing.py   - preprocesses the chunk files(cleaning , indexing , updating the embeddings)
   3.answer_generator.py 
