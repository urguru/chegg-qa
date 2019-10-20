from urllib import request
from html.parser import HTMLParser
from bs4 import BeautifulSoup


web=request.urlopen('https://www.nku.edu/academics/informatics/programs/computerscience/CSC%20People.html')

data=web.read()

# nku-photo-gallery-list-description
soup = BeautifulSoup(data,features="html.parser")

persons=[]
for person in soup.find_all("div", attrs={"class": "nku-photo-gallery-list-description"}):
    print(person.h4.string)
    print(person.p.get_text().split('\n'))
    # a.append(person.p.get_text().split('\n')[3])
    # a.append(person.p.get_text().split('\n')[4])
    # persons.append(a)



print(persons)







# <div class="nku-photo-gallery-list-description">
# <h4>Maureen Doyle, Ph.D.</h4>
# <p>Department of Computer Science Chair<br/>
# Professor<br/>
# GH 400D<br/>
# 859-572-5468<br/>
# <a href="mailto:doylem3@nku.edu">doylem3@nku.edu</a></p>
# <div class="nku-modal">Bio</div>
# <p><b>Personal</b><br/>
# <br/>
# I (she/her) was raised in Tewksbury, a town about 20 miles from Boston, MA.  I live in Kentucky and enjoy the beauty
# of the arts and parks of greater Cincinnati.<br/>
# <br/>
# <b>Academic</b><br/>
# <br/>
# I earned my PhD in Scientific Computing and Computational Mathematics from Stanford University in 2004.  My research
# interests include recruitment and retention of STEM majors as well as empirical software engineering.<br/>
# <br/>
# I enjoy teaching programming classes and meeting students when they are first starting their studies here at NKU, and also enjoy teaching graduate classes that critically examine evidence-based practices in software engineering.  I worked in industry for almost 20 years and enjoy sharing my successes, and failures, with students as a motivation for
# learning and thinking critically.  <br/>
# <br/>
# I am the faculty advisor for the Women In Informatics group and currently serve as co-chair for National Council for
# Women In Technology’s Academic Alliance.  I am also co-editor of ACM’s SIGCSE Bulletin.</p>
# </div>