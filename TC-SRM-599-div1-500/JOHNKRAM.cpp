#include<bits/stdc++.h>
using namespace std;
const int a[]={-1,-1,-1,-1,0,-1,1,-1,0,-1,1,-1,2,-1,1,-1,1,-1,3,-1,0,-1,1,-1,4,-1,1,-1,0,-1,8,-1,2,-1,1,-1,3,-1,1,-1,9,-1,2,-1,9,-1,1,-1,3,-1,1,-1,0,-1,8,-1,18,-1,1,-1,10,-1,1,-1,4,-1,19,-1,9,-1,9,-1,6,-1,1,-1,18,-1,22,-1,5,-1,1,-1,4,-1,1,-1,18,-1,11,-1,0,-1,1,-1,6,-1,11,-1,2,-1,1,-1,15,-1,1,-1,9,-1,27,-1,7,-1,26,-1,0,-1,1,-1,20,-1,1,-1,0,-1,6,-1,8,-1,11,-1,22,-1,1,-1,18,-1,1,-1,18,-1,1,-1,9,-1,1,-1,0,-1,3,-1,36,-1,31,-1,2,-1,1,-1,10,-1,3,-1,32,-1,1,-1,8,-1,41,-1,25,-1,56,-1,11,-1,1,-1,15,-1,47,-1,0,-1,46,-1,0,-1,11,-1,12,-1,1,-1,1,-1,33,-1,4,-1,1,-1,27,-1,1,-1,13,-1,10,-1,0,-1,1,-1,18,-1,1,-1,9,-1,26,-1,14,-1,1,-1,22,-1,39,-1,63,-1,32,-1,50,-1,40,-1,15,-1,13,-1,0,-1,1,-1,89,-1,5,-1,12,-1,1,-1,11,-1,22,-1,22,-1,1,-1,44,-1,29,-1,49,-1,19,-1,17,-1,1,-1,46,-1,1,-1,36,-1,1,-1,0,-1,46,-1,11,-1,51,-1,72,-1,14,-1,99,-1,1,-1,6,-1,1,-1,19,-1,29,-1,62,-1,63,-1,4,-1,1,-1,0,-1,103,-1,20,-1,25,-1,6,-1,1,-1,34,-1,49,-1,81,-1,1,-1,16,-1,11,-1,45,-1,57,-1,50,-1,1,-1,58,-1,7,-1,22,-1,91,-1,81,-1,1,-1,30,-1,1,-1,38,-1,74,-1,23,-1,81,-1,26,-1,72,-1,0,-1,18,-1,22,-1,1,-1,24,-1,1,-1,72,-1,33,-1,2,-1,1,-1,33,-1,1,-1,8,-1,122,-1,0,-1,113,-1,50,-1,117,-1,0,-1,69,-1,26,-1,61,-1,20,-1,1,-1,135,-1,1,-1,98,-1,152,-1,27,-1,100,-1,0,-1,46,-1,17,-1,81,-1,52,-1,1,-1,28,-1,9,-1,81,-1,1,-1,44,-1,1,-1,49,-1,22,-1,29,-1,1,-1,6,-1,51,-1,100,-1,133,-1,27,-1,1,-1,26,-1,1,-1,13,-1,9,-1,47,-1,55,-1,82,-1,72,-1,31,-1,158,-1,10,-1,1,-1,24,-1,27,-1,0,-1,77,-1,22,-1,1,-1,44,-1,47,-1,44,-1,52,-1,81,-1,1,-1,33,-1,111,-1,58,-1,1,-1,98,-1,1,-1,28,-1,1,-1,34,-1,26,-1,128,-1,11,-1,92,-1,1,-1,121,-1,93,-1,35,-1,1,-1,94,-1,1,-1,0,-1,33,-1,36,-1,136,-1,3,-1,23,-1,102,-1,2,-1,144,-1,1,-1,3,-1,117,-1,37,-1,25,-1,0,-1,200,-1,12,-1,151,-1,0,-1,199,-1,38,-1,119,-1,51,-1,1,-1,57,-1,157,-1,126,-1,1,-1,8,-1,1,-1,0,-1,30,-1,233,-1,1,-1,106,-1,45,-1,40,-1,182,-1,50,-1,135,-1,12,-1,13,-1,162,-1,214,-1,41,-1,1,-1,27,-1,1,-1,162,-1,78,-1,0,-1,232,-1,32,-1,1,-1,22,-1,1,-1,59,-1,89,-1,35,-1,37,-1,43,-1,117,-1,0,-1,1,-1,116,-1,1,-1,14,-1,34,-1,44,-1,1,-1,101,-1,1,-1,117,-1,34,-1,98,-1,1,-1,45,-1,1,-1,0,-1,39,-1,67,-1,1,-1,94,-1,1,-1,46,-1,84,-1,119,-1,115,-1,50,-1,1,-1,99,-1,15,-1,47,-1,28,-1,36,-1,1,-1,44,-1,146,-1,0,-1,1,-1,33,-1,57,-1,121,-1,66,-1,144,-1,1,-1,10,-1,121,-1,4,-1,259,-1,0,-1,207,-1,66,-1,1,-1,0,-1,38,-1,16,-1,1,-1,26,-1,136,-1,297,-1,15,-1,144,-1,232,-1,49,-1,1,-1,160,-1,1,-1,306,-1,51,-1,62,-1,159,-1,52,-1,22,-1,67,-1,1,-1,40,-1,1,-1,162,-1,141,-1,53,-1,17,-1,142,-1,143,-1,196,-1,61,-1,125,-1,1,-1,33,-1,1,-1,187,-1,153,-1,273,-1,14,-1,92,-1,1,-1,34,-1,33,-1,117,-1,1,-1,104,-1,58,-1,0,-1,296,-1,38,-1,1,-1,18,-1,73,-1,79,-1,286,-1,225,-1,77,-1,57,-1,1,-1,0,-1,50,-1,98,-1,1,-1,44,-1,1,-1,58,-1,52,-1,225,-1,1,-1,12,-1,256,-1,102,-1,118,-1,42,-1,202,-1,22,-1,19,-1,54,-1,91,-1,0,-1,1,-1,52,-1,131,-1,169,-1,46,-1,26,-1,1,-1,18,-1,1,-1,61,-1,262,-1,5,-1,1,-1,102,-1,151,-1,108,-1,121,-1,62,-1,200,-1,128,-1,1,-1,20,-1,1,-1,242,-1,1,-1,48,-1,244,-1,54,-1,33,-1,354,-1,1,-1,135,-1,309,-1,13,-1,107,-1,225,-1,147,-1,88,-1,131,-1,94,-1,271,-1,65,-1,1,-1,87,-1,1,-1,162,-1,21,-1,0,-1,166,-1,66,-1,11,-1,222,-1,177,-1,116,-1,209,-1,169,-1,248,-1,67,-1,326,-1,0,-1,91,-1,56,-1,1,-1,0,-1,314,-1,54,-1,147,-1,14,-1,1,-1,256,-1,119,-1,22,-1,200,-1,55,-1,268,-1,0,-1,130,-1,242,-1,1,-1,78,-1,246,-1,70,-1,89,-1,200,-1,1,-1,95,-1,329,-1,162,-1,21,-1,71,-1,1,-1,66,-1,1,-1,72,-1,1,-1,174,-1,23,-1,6,-1,1,-1,11,-1,362,-1,98,-1,163,-1,4,-1,245,-1,73,-1,99,-1,0,-1,1,-1,6,-1,175,-1,234,-1,344,-1,74,-1,1,-1,50,-1,127,-1,153,-1,349,-1,158,-1,1,-1,24,-1,1,-1,175,-1,201,-1,449,-1,65,-1,188,-1,1,-1,63,-1,58,-1,238,-1,226,-1,102,-1,1,-1,289,-1,127,-1,62,-1,1,-1,74,-1,1,-1,179,-1,77,-1,0,-1,344,-1,16,-1,25,-1,288,-1,157,-1,255,-1,55,-1,60,-1,1,-1,79,-1,166,-1,0,-1,369,-1,212,-1,128,-1,90,-1,213,-1,55,-1,1,-1,200,-1,1,-1,100,-1,110,-1,137,-1,1,-1,24,-1,296,-1,26,-1,62,-1,324,-1,1,-1,142,-1,333,-1,82,-1,123,-1,297,-1,1,-1,51,-1,1,-1,169,-1,61,-1,83,-1,77,-1,111,-1,289,-1,0,-1,338,-1,91,-1,351,-1,64,-1,1,-1,288,-1,27,-1,44,-1,1,-1,226,-1,1,-1,85,-1,427,-1,129,-1,1,-1,70,-1,387,-1,7,-1,26,-1,86,-1,136,-1,147,-1,1,-1,495,-1,66,-1,338,-1,131,-1,87,-1,77,-1,0,-1,1,-1,28,-1,1,-1,18,-1,98,-1,88,-1,109,-1,225,-1,181,-1,202,-1,1,-1,494,-1,237,-1,89,-1,195,-1,68,-1,121,-1,196,-1,1,-1,0,-1,1,-1,55,-1,197,-1,2,-1,286,-1,119,-1,29,-1,39,-1,1,-1,91,-1,27,-1,360,-1,263,-1,141,-1,1,-1,0,-1,8,-1,92,-1,397,-1,83,-1,1,-1,178,-1,85,-1,153,-1,1,-1,93,-1,556,-1,0,-1,249,-1,175,-1,328,-1,30,-1,1,-1,94,-1,494,-1,56,-1,421,-1,72,-1,1,-1,361,-1,81,-1,88,-1,1,-1,214,-1,236,-1,0,-1,93,-1,0,-1,371,-1,66,-1,1,-1,63,-1,1,-1,242,-1,1,-1,129,-1,31,-1,49,-1,74,-1,0,-1,264,-1,20,-1,139,-1,207,-1,47,-1,8,-1,279,-1,230,-1,1,-1,585,-1,1,-1,133,-1,89,-1,92,-1,350,-1,0,-1,333,-1,594,-1,1,-1,46,-1,456,-1,32,-1,231,-1,392,-1,712,-1,52,-1,125,-1,85,-1,511,-1,87,-1,1,-1,30,-1,1,-1,288,-1,242,-1,333,-1,328,-1,98,-1,65,-1,288,-1,78,-1,170,-1,1,-1,242,-1,1,-1,64,-1,33,-1,102,-1,1,-1,124,-1,1,-1,318,-1,122,-1,104,-1,58,-1,44,-1,461,-1,134,-1,161,-1,338,-1,1,-1,23,-1,13,-1,0,-1,1,-1,324,-1,55,-1,126,-1,91,-1,106,-1,458,-1,34,-1,392,-1,284,-1,1,-1,286,-1,99,-1,107,-1,1,-1,22,-1,1,-1,250,-1,82,-1,0,-1,1,-1,9,-1,249,-1,361,-1,69,-1,89,-1,376,-1,142,-1,311,-1,109,-1,6,-1,28,-1,35,-1,184,-1,1,-1,0,-1,536,-1,68,-1,1,-1,9,-1,1,-1,142,-1,274,-1,441,-1,1,-1,111,-1,257,-1,116,-1,33,-1,642,-1,108,-1,235,-1,477,-1,76,-1,127,-1,441,-1,347,-1,36,-1,147,-1,146,-1,86,-1,113,-1,423,-1,118,-1,1,-1,450,-1,260,-1,127,-1,1,-1,114,-1,333,-1,288,-1,307,-1,579,-1,403,-1,100,-1,1,-1,81,-1,358,-1,0,-1,202,-1,88,-1,37,-1,0,-1,309,-1,116,-1,1,-1,104,-1,200,-1,315,-1,1,-1,242,-1,360,-1,24,-1,1,-1,47,-1,142,-1,204,-1,1,-1,236,-1,75,-1,84,-1,47,-1,189,-1,1,-1,44,-1,105,-1,38,-1,559,-1,108,-1,1,-1,159,-1,1,-1,0,-1,91,-1,0,-1,131,-1,104,-1,47,-1,242,-1,321,-1,338,-1,1,-1,92,-1,1,-1,23,-1,199,-1,360,-1,1,-1,36,-1,340,-1,0,-1,39,-1,122,-1,1,-1,74,-1,181,-1,10,-1,180,-1,441,-1,1,-1,123,-1,178,-1,261,-1,94,-1,216,-1,199,-1,81,-1,1,-1,124,-1,362,-1,337,-1,469,-1,256,-1,1,-1,450,-1,139,-1,40,-1,230,-1,334,-1,247,-1,484,-1,283,-1,0,-1,297,-1,77,-1,1,-1,488,-1,482,-1,108,-1,1,-1,26,-1,254,-1,127,-1,207,-1,0,-1,1,-1,37,-1,1,-1,477,-1,64,-1,26,-1,41,-1,105,-1,283,-1,450,-1,83,-1,294,-1,1,-1,129,-1,1,-1,137,-1,253,-1,188,-1,77,-1,317,-1,1,-1,49,-1,547,-1,512,-1,512,-1,78,-1,121,-1,361,-1,502,-1,99,-1,1,-1,42,-1,1,-1,0,-1,39,-1,242,-1,152,-1,91,-1,505,-1,22,-1,1,-1,167,-1,1,-1,177,-1,1,-1,61,-1,512,-1,187,-1,248,-1,338,-1,1,-1,490,-1,102,-1,134,-1,355,-1,294,-1,43,-1,238,-1,1,-1,11,-1,574,-1,112,-1,126,-1,0,-1,3,-1,738,-1,223,-1,2,-1,1,-1,108,-1,3,-1,294,-1,1,-1,28,-1,1,-1,529,-1,230,-1,137,-1,1,-1,183,-1,659,-1,44,-1,718,-1,400,-1,1,-1,110,-1,187,-1,536,-1,187,-1,345,-1,1,-1,133,-1,544,-1,139,-1,106,-1,0,-1,152,-1,150,-1,1,-1,257,-1,698,-1,140,-1,419,-1,178,-1,1,-1,400,-1,45,-1,338,-1,175,-1,141,-1,1,-1,405,-1,84,-1,324,-1,531,-1,42,-1,521,-1,142,-1,694,-1,441,-1,216,-1,132,-1,437,-1,450,-1,381,-1,116,-1,524,-1,382,-1,239,-1,238,-1,1,-1,46,-1,1,-1,12,-1,1,-1,289,-1,37,-1,22,-1,261,-1,286,-1,606,-1,145,-1,198,-1,326,-1,1,-1,8,-1,483,-1,477,-1,631,-1,146,-1,1,-1,30,-1,1,-1,855,-1,91,-1,578,-1,47,-1,12,-1,573,-1,350,-1,305,-1,468,-1,1,-1,394,-1,77,-1,148,-1,422,-1,512,-1,1,-1,100,-1,289,-1,135,-1,362,-1,86,-1,1,-1,218,-1,1,-1,155,-1,114,-1,0,-1,621,-1,48,-1,1,-1,529,-1,1,-1,350,-1,239,-1,78,-1,407,-1,90,-1,218,-1,65,-1,158,-1,376,-1,1,-1,0,-1,45,-1,126,-1,1,-1,116,-1,309,-1,235,-1,161,-1,452,-1,1,-1,49,-1,49,-1,0,-1,626,-1,578,-1,1,-1,254,-1,1,-1,124,-1,224,-1,392,-1,143,-1,148,-1,1,-1,450,-1,118,-1,155,-1,756,-1,68,-1,567,-1,0,-1,301,-1,567,-1,184,-1,32,-1,1,-1,37,-1,66,-1,194,-1,199,-1,201,-1,747,-1,157,-1,811,-1,110,-1,1,-1,120,-1,125,-1,0,-1,358,-1,158,-1,131,-1,332,-1,229,-1,271,-1,259,-1,738,-1,413,-1,159,-1,567,-1,13,-1,51,-1,180,-1,1,-1,213,-1,1,-1,110,-1,122,-1,441,-1,1,-1,371,-1,747,-1,625,-1,183,-1,161,-1,1,-1,220,-1,1,-1,241,-1,1,-1,0,-1,235,-1,48,-1,1,-1,361,-1,817,-1,52,-1,1,-1,124,-1,1,-1,163,-1,260,-1,0,-1,1,-1,202,-1,248,-1,405,-1,42,-1,164,-1,64,-1,219,-1,568,-1,338,-1,94,-1,578,-1,1,-1,102,-1,1,-1,0,-1,83,-1,338,-1,53,-1,34,-1,1,-1,166,-1,686,-1,154,-1,70,-1,133,-1,361,-1,102,-1,174,-1,167,-1,325,-1,166,-1,331,-1,182,-1,351,-1,197,-1,552,-1,114,-1,307,-1,648,-1,1,-1,525,-1,744,-1,54,-1,479,-1,1,-1,211,-1,0,-1,783,-1,237,-1,209,-1,504,-1,453,-1,61,-1,1,-1,392,-1,233,-1,258,-1,130,-1,441,-1,1,-1,140,-1,23,-1,640,-1,814,-1,14,-1,1,-1,52,-1,55,-1,172,-1,51,-1,272,-1,704,-1,294,-1,1,-1,529,-1,824,-1,144,-1,639,-1,132,-1,455,-1,676,-1,526,-1,262,-1,653,-1,155,-1,740,-1,154,-1,156,-1,897,-1,465,-1,361,-1,1,-1,56,-1,859,-1,0,-1,189,-1,36,-1,199,-1,196,-1,134,-1,121,-1,1,-1,218,-1,95,-1,450,-1,354,-1,100,-1,632,-1,126,-1,581,-1,0,-1,203,-1,42,-1,199,-1,66,-1,1,-1,178,-1,57,-1,390,-1,1,-1,136,-1,1,-1,117,-1,273,-1,179,-1,1,-1,478,-1,32,-1,0,-1,1,-1,0,-1,1,-1,15,-1,621,-1,207,-1,194,-1,4,-1,115,-1,386,-1,1,-1,181,-1,138,-1,58,-1,1,-1,78,-1,1,-1,0,-1,10,-1,135,-1,330,-1,39,-1,1,-1,221,-1,962,-1,202,-1,277,-1,98,-1,783,-1,0,-1,489,-1,1097,-1,783,-1,15,-1,1,-1,184,-1,854,-1,430,-1,59,-1,166,-1,736,-1,450,-1,175,-1,171,-1,1,-1,38,-1,1,-1,57,-1,125,-1,0,-1,1,-1,186,-1,1,-1,707,-1,142,-1,825,-1,1,-1,249,-1,197,-1,187,-1,26,-1,333,-1,1,-1,60,-1,648,-1,0,-1,501,-1,63,-1,299,-1,392,-1,518,-1,112,-1,1,-1,637,-1,1,-1,67,-1,509,-1,0,-1,419,-1,722,-1,515,-1,162,-1,79,-1,13,-1,33,-1,729,-1,1,-1,428,-1,61,-1,472,-1,1016,-1,191,-1,1053,-1,186,-1,1,-1,0,-1,146,-1,650,-1,1192,-1,39,-1,349,-1,648,-1,57,-1,119,-1,237,-1,514,-1,1,-1,193,-1,441,-1,0,-1,256,-1,258,-1,1,-1,62,-1,343,-1,98,-1,1,-1,22,-1,1,-1,567,-1,403,-1,143,-1,1,-1,40,-1,508,-1,278,-1,1,-1,162,-1,1,-1,94,-1,1,-1,16,-1,982,-1,558,-1,1,-1,460,-1,79,-1,625,-1,63,-1,197,-1,488,-1,526,-1,1,-1,266,-1,344,-1,178,-1,1,-1,121,-1,519,-1,242,-1,33,-1,975,-1,559,-1,530,-1,299,-1,199,-1,136,-1,0,-1,83,-1,92,-1,1,-1,382,-1,344,-1,64,-1,1,-1,192,-1,120,-1,784,-1,463,-1,578,-1,1,-1,104,-1,1,-1,250,-1,328,-1,170,-1,1,-1,538,-1,187,-1,174,-1,49,-1,800,-1,1,-1,60,-1,1,-1,450,-1,1034,-1,123,-1,65,-1,479,-1,1,-1,350,-1,319,-1,656,-1,493,-1,162,-1,315,-1,130,-1,224,-1,576,-1,1,-1,42,-1,593,-1,205,-1,506,-1,0,-1,399,-1,484,-1,178,-1,0,-1,357,-1,128,-1,756,-1,66,-1,369,-1,204,-1,212,-1,729,-1,507,-1,165,-1,1,-1,0,-1,158,-1,486,-1,690,-1,244,-1,1,-1,143,-1,153,-1,17,-1,1,-1,88,-1,1,-1,721,-1,1064,-1,209,-1,339,-1,234,-1,67,-1,676,-1,73,-1,0,-1,344,-1,46,-1,47,-1,26,-1,267,-1,254,-1,1,-1,562,-1,1,-1,211,-1,926,-1,110,-1,325,-1,252,-1,1,-1,91,-1,371,-1,212,-1,1,-1,118,-1,1,-1,68,-1,63,-1,588,-1,597,-1,213,-1,351,-1,0,-1,1,-1,329,-1,1,-1,175,-1,637,-1,214,-1,886,-1,729,-1,185,-1,44,-1,56,-1,841,-1,573,-1,215,-1,1,-1,164,-1,1,-1,0,-1,69,-1,0,-1,856,-1,18,-1,136,-1,498,-1,938,-1,435,-1,1,-1,33,-1,463,-1,136,-1,461,-1,711,-1,729,-1,284,-1,1,-1,622,-1,166,-1,209,-1,371,-1,12,-1,1,-1,56,-1,589,-1,34,-1,216,-1,219,-1,1,-1,0,-1,53,-1,1121,-1,1013,-1,586,-1,1,-1,136,-1,1099,-1,800,-1,595,-1,18,-1,843,-1,882,-1,22,-1,221,-1,184,-1,392,-1,189,-1,882,-1,532,-1,0,-1,71,-1,222,-1,1,-1,514,-1,1,-1,232,-1,549,-1,66,-1,1,-1,223,-1,170,-1,216,-1,1,-1,459,-1,1,-1,490,-1,597,-1,152,-1,245,-1,46,-1,1,-1,882,-1,1,-1,183,-1,1000,-1,33,-1,1,-1,294,-1,526,-1,131,-1,5,-1,146,-1,610,-1,226,-1,221,-1,846,-1,1,-1,236,-1,329,-1,882,-1,195,-1,227,-1,248,-1,303,-1,951,-1,254,-1,814,-1,0,-1,1,-1,189,-1,73,-1,218,-1,174,-1,576,-1,331,-1,470,-1,1,-1,229,-1,133,-1,432,-1,359,-1,200,-1,1,-1,0,-1,1126,-1,162,-1,685,-1,506,-1,936,-1,783,-1,379,-1,404,-1,1,-1,176,-1,13,-1,74,-1,1,-1,1289,-1,451,-1,222,-1,387,-1,232,-1,214,-1,729,-1,121,-1,208,-1,1,-1,19,-1,69,-1,233,-1,362,-1,622,-1,1,-1,484,-1,178,-1,153,-1,1,-1,48,-1,1,-1,648,-1,75,-1,94,-1,1,-1,284,-1,1,-1,235,-1,201,-1,0,-1,337,-1,472,-1,140,-1,150,-1,165,-1,168,-1,1,-1,94,-1,905,-1,378,-1,674,-1,722,-1,597,-1,88,-1,860,-1,210,-1,498,-1,76,-1,1,-1,634,-1,992,-1,216,-1,643,-1,512,-1,1,-1,318,-1,238,-1,1127,-1,182,-1,239,-1,1,-1,182,-1,427,-1,0,-1,349,-1,262,-1,287,-1,165,-1,276,-1,11,-1,1,-1,287,-1,77,-1,321,-1,539,-1,241,-1,314,-1,605,-1,1,-1,184,-1,1,-1,0,-1,330,-1,46,-1,989,-1,148,-1,940,-1,382,-1,1,-1,729,-1,340,-1,72,-1,591,-1,680,-1,757,-1,1458,-1,1,-1,50,-1,1,-1,244,-1,115,-1,968,-1,551,-1,148,-1,389,-1,362,-1,1231,-1,20,-1,512,-1,327,-1,1182,-1,882,-1,706,-1,0,-1,733,-1,246,-1,415,-1,356,-1,369,-1,291,-1,1,-1,145,-1,79,-1,247,-1,1171,-1,398,-1,1,-1,153,-1,163,-1,0,-1,122,-1,248,-1,1161,-1,507,-1,1,-1,473,-1,183,-1,938,-1,664,-1,249,-1,1,-1,0,-1,190,-1,900,-1,1,-1,278,-1,1,-1,80,-1,209,-1,252,-1,1,-1,668,-1,956,-1,319,-1,669,-1,224,-1,297,-1,130,-1,1,-1,0,-1,431,-1,502,-1,341,-1,21,-1,1,-1,648,-1,1057,-1,651,-1,879,-1,334,-1,101,-1,216,-1,75,-1,0,-1,1,-1,52,-1,1,-1,181,-1,1352,-1,254,-1,99,-1,241,-1,328,-1,1377,-1,14,-1,578,-1,1,-1,74,-1,1179,-1,0,-1,681,-1,670,-1,889,-1,128,-1,427,-1,52,-1,1358,-1,82,-1,393,-1,210,-1,1,-1,566,-1,539,-1,257,-1,221,-1,21,-1,1807,-1,588,-1,78,-1,0,-1,1,-1,258,-1,107,-1,961,-1,408,-1,274,-1,1,-1,131,-1,445,-1,259,-1,1318,-1,154,-1,83,-1,539,-1,189,-1,0,-1,29,-1,98,-1,1,-1,529,-1,1,-1,837,-1,110,-1,1024,-1,1,-1,156,-1,1,-1,171,-1,231,-1,722,-1,249,-1,338,-1,331,-1,198,-1,608,-1,968,-1,1,-1,84,-1,785,-1,882,-1,1064,-1,263,-1,1143,-1,54,-1,217,-1,484,-1,294,-1,304,-1,1,-1,182,-1,1,-1,125,-1,327,-1,44,-1,281,-1,675,-1,959,-1,265,-1,202,-1,0,-1,1,-1,354,-1,85,-1,0,-1,934,-1,122,-1,1,-1,710,-1,1,-1,374,-1,323,-1,334,-1,384,-1,218,-1,1,-1,0,-1,585,-1,963,-1,1,-1,204,-1,1,-1,268,-1,233,-1,693,-1,481,-1,588,-1,401,-1,86,-1,717,-1,269,-1,1,-1,718,-1,1,-1,22,-1,1,-1,612,-1,504,-1,165,-1,1,-1,252,-1,206,-1,1023,-1,1,-1,6,-1,497,-1,208,-1,435,-1,184,-1,467,-1,4,-1,627,-1,0,-1,87,-1,187,-1,1,-1,6,-1,1,-1,322,-1,482,-1,1089,-1,32,-1,56,-1,70,-1,0,-1,81,-1,1058,-1,103,-1,176,-1,1,-1,274,-1,374,-1,1089,-1,1189,-1,366,-1,143,-1,1318,-1,1034,-1,88,-1,189,-1,454,-1,1,-1,800,-1,24,-1,0,-1,1,-1,220,-1,11,-1,212,-1,299,-1,713,-1,1,-1,249,-1,1169,-1,277,-1,1222,-1,0,-1,1184,-1,266,-1,1,-1,609,-1,255,-1,278,-1,89,-1,212,-1,287,-1,526,-1,1,-1,304,-1,1027,-1,279,-1,315,-1,0,-1,763,-1,514,-1,1,-1,242,-1,1,-1,139,-1,398,-1,729,-1,1,-1,137,-1,418,-1,961,-1,214,-1,281,-1,621,-1,90,-1,1,-1,676,-1,1202,-1,23,-1,365,-1,282,-1,781,-1,841,-1,753,-1,395,-1,453,-1,58,-1,1507,-1,283,-1,998,-1,388,-1,1,-1,84,-1,1,-1,1042,-1,838,-1,284,-1,1,-1,166,-1,91,-1,693,-1,200,-1,432,-1,763,-1,264,-1,1,-1,837,-1,1,-1,900,-1,1,-1,206,-1,1,-1,232,-1,74,-1,1048,-1,441,-1,764,-1,1,-1,467,-1,250,-1,226,-1,1,-1,766,-1,81,-1,67,-1,584,-1,0,-1,238,-1,24,-1,1684,-1,1152,-1,1369,-1,578,-1,1,-1,74,-1,1,-1,44,-1,704,-1,522,-1,639,-1,572,-1,1303,-1,809,-1,1448,-1,290,-1,512,-1,175,-1,629,-1,652,-1,93,-1,722,-1,549,-1,16,-1,749,-1,259,-1,222,-1,377,-1,1,-1,778,-1,591,-1,292,-1,307,-1,1377,-1,1,-1,60,-1,1,-1,882,-1,417,-1,293,-1,409,-1,182,-1,1,-1,1156,-1,87,-1,94,-1,1,-1,24,-1,477,-1,413,-1,590,-1,343,-1,1,-1,393,-1,201,-1,210,-1,1562,-1,0,-1,223,-1,788,-1,538,-1,154,-1,789,-1,215,-1,601,-1,110,-1,1,-1,1024,-1,226,-1,1089,-1,95,-1,200,-1,1,-1,578,-1,142,-1,270,-1,1,-1,724,-1,1,-1,172,-1,455,-1,968,-1,488,-1,436,-1,1,-1,1463,-1,1519,-1,299,-1,1,-1,138,-1,1,-1,0,-1,710,-1,356,-1,1,-1,96,-1,61,-1,1152,-1,401,-1,1058,-1,88,-1,625,-1,693,-1,301,-1,190,-1,124,-1,1,-1,154,-1,163,-1,639,-1,230,-1,180,-1,1,-1,62,-1,648,-1,130,-1,576,-1,316,-1,1,-1,261,-1,97,-1,0,-1,1,-1,1721,-1,712,-1,90,-1,361,-1,67,-1,1514,-1,1089,-1,248,-1,199,-1,1,-1,217,-1,726,-1,305,-1,1,-1,322,-1,1297,-1,705,-1,791,-1,0,-1,1,-1,98,-1,359,-1,25,-1,195,-1,359,-1,929,-1,286,-1,1467,-1,307,-1,97,-1,0,-1,1,-1,508,-1,441,-1,0,-1,1399,-1,248,-1,755,-1,343,-1,1,-1,466,-1,1058,-1,286,-1,373,-1,192,-1,1,-1,0,-1,58,-1,900,-1,1,-1,236,-1,323,-1,53,-1,1627,-1,657,-1,791,-1,121,-1,297,-1,439,-1,458,-1,311,-1,826,-1,602,-1,1134,-1,819,-1,366,-1,368,-1,1443,-1,64,-1,698,-1,961,-1,174,-1,74};
class FindPolygons
{
    public:
        double minimumPolygon(int L)
        {
            return a[L];
        }
};
